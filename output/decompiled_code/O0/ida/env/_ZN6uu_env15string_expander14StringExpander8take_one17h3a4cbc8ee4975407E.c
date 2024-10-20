_QWORD *__fastcall uu_env::string_expander::StringExpander::take_one(_QWORD *a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // rcx
  _QWORD *v3; // rax
  void *v4; // r13
  signed __int64 v5; // r15
  const void *v6; // r12
  signed __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v12; // [rsp+8h] [rbp-60h]
  unsigned __int8 v13; // [rsp+10h] [rbp-58h]
  unsigned int v14; // [rsp+11h] [rbp-57h]
  unsigned __int16 v15; // [rsp+15h] [rbp-53h]
  unsigned __int8 v16; // [rsp+17h] [rbp-51h]
  _QWORD *v17; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  _QWORD *v20; // [rsp+30h] [rbp-38h]

  uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii(&v11, a1 + 3);
  v1 = v12;
  if ( v11 != 0x8000000000000000LL )
  {
    v2 = v13 | ((unsigned __int64)((v16 << 16) | (unsigned int)v15) << 40) | ((unsigned __int64)v14 << 8);
    v17 = v12;
    v18 = v12;
    v19 = v11;
    v20 = &v12[2 * v2];
    if ( v2 )
    {
      v3 = v12;
      do
      {
        v18 = v3 + 2;
        v6 = (const void *)*v3;
        v7 = v3[1];
        if ( *v3 )
        {
          if ( v7 < 0 )
            core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
          core::slice::raw::from_raw_parts::precondition_check(*v3, 1LL, 1LL, v3[1]);
          v8 = a1[2];
          if ( *a1 - v8 < (unsigned __int64)v7 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, a1[2], v7);
            v8 = a1[2];
          }
          v4 = (void *)(a1[1] + v8);
          core::intrinsics::copy_nonoverlapping::precondition_check(v6, v4, 1LL, 1LL, v7);
          memcpy(v4, v6, v7);
          v5 = a1[2] + v7;
        }
        else
        {
          v9 = a1[2];
          if ( v9 == *a1 )
            alloc::raw_vec::RawVec<T,A>::grow_one(a1);
          *(_BYTE *)(a1[1] + v9) = BYTE4(v7);
          v5 = v9 + 1;
        }
        a1[2] = v5;
        v3 = v18;
      }
      while ( v18 != v20 );
    }
    <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v17);
  }
  return v1;
}
