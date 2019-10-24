import java.util.Arrays;
import java.util.InputMismatchException;
import java.io.IOException;
import java.io.InputStream;
public class r506p3{

    static class Node implements Comparable<Node>{
        final long q;
        final int pos;
        Node(long q, int p){
            this.q = q;
            pos = p;
        }
        public int compareTo(Node other){
            if(q < other.q)
                return -1;
            return 1;
        }
    }

    public static void main(String args[]){
        InputReader sc = new InputReader(System.in);

        final int n = sc.nextInt();
        Node nodels[] = new Node[n];
        Node noders[] = new Node[n];

        for(int i=0; i<n; i++) {
            nodels[i] = new Node(sc.nextLong(), i);
            noders[i] = new Node(sc.nextLong(), i);
        }

        Arrays.sort(nodels);
        Arrays.sort(noders);

        int posl[] = new int[n], posr[] = new int[n];
        Arrays.fill(posl, 0);
        Arrays.fill(posr, 0);

        for(int i=0; i<n; i++){
            posl[nodels[i].pos] = i;
            posr[noders[i].pos] = i;
        }

/*        for(int i=0; i<n; i++)
            pw.println(posl[i]+" "+posr[i]);
*/
        long ans = 0;
        for(int i=0; i<n; i++){
            long maxl = (posl[i] == n-1)?(nodels[n-2].q):(nodels[n-1].q);
            long minr = (posr[i] == 0)?(noders[1].q):(noders[0].q);

            if(minr > maxl)
                ans = Math.max(ans, minr-maxl);
        }
        System.out.println(ans);
    }

    static class InputReader {
        private final InputStream stream;
        private final byte[] buf = new byte[8192];
        private int curChar, snumChars;
        private SpaceCharFilter filter;

        InputReader(InputStream stream) {
            this.stream = stream;
        }

        int snext() {
            if (snumChars == -1)
                throw new InputMismatchException();
            if (curChar >= snumChars) {
                curChar = 0;
                try {
                    snumChars = stream.read(buf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (snumChars <= 0)
                    return -1;
            }
            return buf[curChar++];
        }

        int nextInt() {
            int c = snext();
            while (isSpaceChar(c)) {
                c = snext();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = snext();
            }
            int res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = snext();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        long nextLong() {
            int c = snext();
            while (isSpaceChar(c)) {
                c = snext();
            }
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = snext();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9')
                    throw new InputMismatchException();
                res *= 10;
                res += c - '0';
                c = snext();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        String readString() {
            int c = snext();
            while (isSpaceChar(c)) {
                c = snext();
            }
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = snext();
            } while (!isSpaceChar(c));
            return res.toString();
        }

        String nextLine() {
            int c = snext();
            while (isSpaceChar(c))
                c = snext();
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = snext();
            } while (!isEndOfLine(c));
            return res.toString();
        }

        boolean isSpaceChar(int c) {
            if (filter != null)
                return filter.isSpaceChar(c);
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }

        private boolean isEndOfLine(int c) {
            return c == '\n' || c == '\r' || c == -1;
        }

        public interface SpaceCharFilter {
            boolean isSpaceChar(int ch);
        }
    }
}

