__int64 example::example_argument_ownership_move()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-58h] BYREF
  __int128 v4; // [rsp+10h] [rbp-48h]
  _OWORD v5[3]; // [rsp+20h] [rbp-38h] BYREF

  v0 = (_QWORD *)_rust_alloc(8LL, 1LL);
  if ( !v0 )
    alloc::raw_vec::handle_error(1LL, 8LL);
  v1 = v0;
  *v0 = 0x656D616E5F77656ELL;
  example::Person::new(&v3);
  if ( (_QWORD)v3 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v5[0] = *((_QWORD *)&v3 + 1);
    core::result::unwrap_failed(aCalledResultUn, 43LL, v5, &off_57138, &off_57200);
  }
  v5[1] = v4;
  v5[0] = v3;
  *(_QWORD *)&v3 = 8LL;
  *((_QWORD *)&v3 + 1) = v1;
  *(_QWORD *)&v4 = 8LL;
  result = example::Person::change_name(v5, (__int64)&v3);
  if ( *(_QWORD *)&v5[0] )
    return _rust_dealloc(*((_QWORD *)&v5[0] + 1), *(_QWORD *)&v5[0], 1LL);
  return result;
}
