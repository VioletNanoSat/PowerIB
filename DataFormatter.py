print 'Starting Format'

inputfile = open('BATCHARGE.txt')
outputfile = open('CHARGEFIX.txt','w')

print 'Opened Files'

my_text = inputfile.readlines()
floatings = []

numbers = my_text[0].split()
for s in numbers:
	floatings.append(float(s))
#for str in my_text:
#	numbers = str.split()
#	for s in numbers:
#		floatings.append(float(s))
	


txt = 'VIOLET' 

print 'Data Formatted'

outputfile.writelines(`floatings`)

print len(floatings)
print 'Data Written'

inputfile.close()
outputfile.close()

print 'Format Complete'