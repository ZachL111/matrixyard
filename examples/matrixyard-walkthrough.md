# Matrixyard Walkthrough

I use this file as a small checklist before changing the C++ implementation.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | input width | 202 | ship |
| stress | search depth | 185 | ship |
| edge | boundary pressure | 149 | ship |
| recovery | complexity | 230 | ship |
| stale | input width | 180 | ship |

Start with `recovery` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`recovery` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
