public class SubstringOfString {
    public static void main(String[] args) {
        String value = "JAVA";
        int count = 0;

        System.out.println("Substrings of \"" + value + "\" are:");
        for (int start = 0; start < value.length(); start++) {
            for (int end = start + 1; end <= value.length(); end++) {
                System.out.println(value.substring(start, end));
                count++;
            }
        }
        System.out.println("No of substrings present are: " + count);
    }
}
