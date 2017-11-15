# AUFGABE 1

# a) alle Vorlesungsbeispiele wiederholen

# b) Anzahl aller bisherigen ls-Befehle
# P für Perl-Regex, c für count
history | grep -Pc "   \\d+  ls"

# c) Worte mit "Ger" in Wochtentag.txt speicher
grep ^Ger /usr/share/dict/american-english >> $(date +%A).txt

# d) what does -exec for "find" do
# create two files with the same history in it
history >> a.txt && history >> b.txt

# find all files and do a grep search on those
# each file (one at a time --> ;) will be put where {} is
find . -exec grep "   1" {} \;

# e) what does top do

# f) IP address stuff
ifconfig | grep "inet"

# AUFGABE 2

# a) clock rate
# -i = case insensitive
lscpu | grep -i mhz

# b) linux kernel version
uname -r
