open Jest;
open Expect;

let _ = 

describe "Foo" (fun () => {
  test "foo" (fun () => expect (1 + 2) |> toBe 3)
});
