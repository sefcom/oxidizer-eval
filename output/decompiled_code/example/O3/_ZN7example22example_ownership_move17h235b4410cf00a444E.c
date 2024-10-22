__int64 example::example_ownership_move()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+0h] [rbp-48h] BYREF
  _OWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF

  example::Person::new(v2);
  if ( *(_QWORD *)&v2[0] == 0x8000000000000000LL )
    example::example_ownership_move::panic_cold_explicit();
  v1[1] = v2[1];
  v1[0] = v2[0];
  result = example::Person::print((__int64)v1);
  if ( *(_QWORD *)&v1[0] )
    return _rust_dealloc(*((_QWORD *)&v1[0] + 1), *(_QWORD *)&v1[0], 1LL);
  return result;
}
