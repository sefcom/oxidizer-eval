_QWORD *__fastcall uu_tail::args::parse_num(_QWORD *a1, __int64 a2, __int64 a3)
{
  char *v3; // r15
  size_t v4; // rdx
  size_t v5; // r14
  int v6; // edx
  bool v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  void *v11; // r13
  _OWORD v13[2]; // [rsp+0h] [rbp-108h] BYREF
  void *v14; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v15; // [rsp+28h] [rbp-E0h]
  void *dest; // [rsp+30h] [rbp-D8h]
  __int64 v17; // [rsp+38h] [rbp-D0h]
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+60h] [rbp-A8h]
  _QWORD v21[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v22[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v23[3]; // [rsp+90h] [rbp-78h] BYREF
  char v24; // [rsp+A8h] [rbp-60h]
  _QWORD v25[4]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v26; // [rsp+D0h] [rbp-38h]
  char v27; // [rsp+D2h] [rbp-36h]

  v3 = (char *)core::str::<impl str>::trim_matches(a2, a3);
  v5 = v4;
  v21[0] = v3;
  v21[1] = &v3[v4];
  v7 = 1;
  if ( (unsigned int)core::str::validations::next_code_point(v21) )
  {
    if ( (v6 ^ 0xD800u) - 2048 >= 0x10F800 )
      core::panicking::panic_nounwind(anon_d47df02a786f831a0d9960a1e02c39b9_4_llvm_1356039585147583896, 57LL);
    if ( v6 == 43 || v6 == 45 )
    {
      if ( v5 <= 1 )
      {
        if ( v5 != 1 || !v3 )
LABEL_30:
          core::str::slice_error_fail(v3, v5, 1LL, v5, &off_18A6B0);
      }
      else if ( v3[1] <= -65 )
      {
        goto LABEL_30;
      }
      ++v3;
      --v5;
      v7 = v6 != 43;
    }
  }
  v26 = 0;
  v27 = 0;
  v25[0] = 0LL;
  v25[2] = 0LL;
  uucore::parser::parse_size::Parser::parse(&v19, v25, v3, v5);
  if ( (_QWORD)v19 == 3LL )
  {
    if ( !*((_QWORD *)&v20 + 1) )
    {
      v9 = v20;
      if ( (_QWORD)v20 )
      {
        a1[1] = !v7;
        a1[2] = v9;
      }
      else if ( v7 )
      {
        a1[1] = 3LL;
      }
      else
      {
        a1[1] = 2LL;
      }
      *a1 = 3LL;
      return a1;
    }
    v23[0] = 0LL;
    v23[1] = v3;
    v23[2] = v5;
    v24 = 1;
    v22[0] = v23;
    v22[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v14 = &anon_f907210316a4f48a9c7de5c93e2a79ff_370_llvm_5503381581801417789;
    v15 = 2LL;
    v18 = 0LL;
    dest = v22;
    v17 = 1LL;
    core::option::Option<T>::map_or_else((char *)v13 + 8, 0LL, v8, &v14);
    *(_QWORD *)&v13[0] = 2LL;
  }
  else
  {
    v13[0] = v19;
    v13[1] = v20;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v14, v5, 0LL);
  v10 = v15;
  if ( v14 )
    alloc::raw_vec::handle_error(v15, dest);
  v11 = dest;
  core::intrinsics::copy_nonoverlapping::precondition_check(v3, dest, 1LL, 1LL, v5);
  memcpy(v11, v3, v5);
  *a1 = 1LL;
  a1[1] = v10;
  a1[2] = v11;
  a1[3] = v5;
  if ( *(_QWORD *)&v13[0] != 3LL )
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(v13);
  return a1;
}
