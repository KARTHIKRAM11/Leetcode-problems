# Read from the file file.txt and print its transposed content to stdout.
awk '{
  for (i = 1; i <= NF; ++i) {
    if (NR == 1) {
      arr[i] = $i;
    } else {
      arr[i] = arr[i] " " $i;
    }
  }
}
END {
  for (i = 1; i <= NF; ++i) {
    print arr[i];
  }
}' file.txt
