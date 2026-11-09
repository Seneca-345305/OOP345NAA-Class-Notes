### Stream State Flags Reference

| Flag/Method | Meaning | When Set (True) |
|-------------|---------|-----------------|
| `good()`   | Stream is in a good state—no errors. | No error bits (failbit, badbit, eofbit) are set; operations succeed normally. |
| `fail()`   | General failure: Logical or format error. | failbit or badbit is set (e.g., read/write mismatch, invalid input during formatted I/O like `>>` failing to parse). |
| `eof()`    | End-of-file reached during input. | eofbit is set after a read operation attempts to read past the end (e.g., `>>` or `read()` returns 0 bytes). |
| `bad()`    | Irrecoverable/fatal error (e.g., hardware issue). | badbit is set for severe problems like disk full during write or read/write to invalid position. |
