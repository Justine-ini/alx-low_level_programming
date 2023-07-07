# C - Bit manipulation

Bit manipulation refers to the manipulation and control of individual bits within binary data. It involves using bitwise operators to perform various operations at the bit level. Bit manipulation is often used in low-level programming, embedded systems, and optimizing algorithms where fine-grained control over individual bits is required.

In the C programming language, several bitwise operators are available for performing bit manipulation operations:

Bitwise AND (&): This operator performs a bitwise AND operation on the corresponding bits of two operands. The result is 1 only if both bits are 1; otherwise, it is 0.

Bitwise OR (|): This operator performs a bitwise OR operation on the corresponding bits of two operands. The result is 1 if either of the bits is 1; otherwise, it is 0.

Bitwise XOR (^): This operator performs a bitwise exclusive OR operation on the corresponding bits of two operands. The result is 1 if the bits are different; otherwise, it is 0.

Bitwise NOT (~): This operator performs a bitwise negation operation on each bit of the operand. It flips all the bits, turning 0s into 1s and 1s into 0s.

Left shift (<<): This operator shifts the bits of the left operand to the left by a specified number of positions. The leftmost bits are filled with zeros, and the rightmost bits are discarded.

Right shift (>>): This operator shifts the bits of the left operand to the right by a specified number of positions. For unsigned types, the rightmost bits are filled with zeros, and the leftmost bits are discarded. For signed types, the behavior depends on the implementation-defined sign extension.

These operators can be used to perform various tasks, such as setting or clearing specific bits, extracting or modifying specific bits, or performing arithmetic operations at the bit level.
