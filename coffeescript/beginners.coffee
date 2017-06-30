# http://blog.teamtreehouse.com/the-absolute-beginners-guide-to-coffeescript

first_name = "Mario"
full_name = first_name + " McFly"

# interpolation only works with double quotes
real_name = "#{first_name} Smith"

# single quote - literal str
literal_name = '#{first_name} Literal'

flux_cap_const = 99.9

initialize_circuits = -> year * flux_cap_const * speed


initialize_time_circuits = ->
  year = 1885
  year * flux_cap_const * speed


initialize_time_circuits = (speed, year = 1885) ->
  year * flux_cap_const * speed

initialize_time_circuits 88

initialize_time_circuits(88)

mcflys = ["Marty", "George", "Lorraine", "Dave", "Linda"]


# can do this or regular JSON for object definition
teammates =
  team_member:
    name: "Zack Shoylev"
    hair: "Brown"
  team_member:
    name: "Brian Curtin"
    hair: "Brown"
  team_member:
    name: "Hemanth Makkapati"
    hair: "Black"
  team_member:
    name: "Jesse Cook"
    hair: null

many_numbers = [1..1337]

# should be 1 through 1336
not_as_many_numbers = many_numbers[0..1335]

# splat!
giveKudos = (first, second, third, rest...) ->
    console.log "First place winner: #{first}"
    console.log "Second place winner: #{second}"
    console.log "Third place winner: #{third}"
    for loser in rest
        console.log "Loser: #{loser}"

players = ["Mario", "Brandon", "Andre", "Lebron James"]

# use array params as positional args - otherwise "players" is first, others
# are null
giveKudos players...

class TimeMachine
    # methods must be followed by :
    constructor: (pilot) ->
        # instance vars use @ symbol
        @pilot = pilot

    go: (noise) ->
        console.log noise

tm = new TimeMachine "HG Wells"

console.log tm.pilot

# subclass
class DeLorean extends TimeMachine
    go: -> super "Eighty Eight Miles Per Hour!!!!!!!!!!!!!!!!!"

doc_browns_car = new DeLorean "Marty"

doc_browns_car.go()

# light_bulbs() if switch is on
# equivalent to
# light_bubs() unless switch is not on
#
# operator cheat sheet
# coffee JS
# is  ===
# isnt !==
# not !
# and &&
# or ||
# true, yes, on true
# false, no, off false
# @, this this
# of in
# in no JS equivalent

# existential operator
console.log "The limit does not exist" if not limit?

# same as ternary operator
greeting = message ? "hello world"

# absorb null references instead of raising TypeError
tm.convertFuel?()

# comprehensions are also a thing
