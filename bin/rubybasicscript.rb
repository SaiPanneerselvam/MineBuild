print "Enter a starting number: "
size = gets.to_i
line = 1

while line <= size
    count = 1
    while count <= line
        print count
        count += 1
    end
    puts
    line += 1
end
