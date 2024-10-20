__int64 __fastcall uu_shuf::parse_head_count(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 result; // rax
  _QWORD *v10; // [rsp+10h] [rbp-D8h] BYREF
  _QWORD *v11; // [rsp+18h] [rbp-D0h]
  __int64 v12; // [rsp+20h] [rbp-C8h]
  _QWORD *v13; // [rsp+28h] [rbp-C0h]
  _BYTE v14[8]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-B0h]
  _QWORD v16[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-98h] BYREF
  char v18; // [rsp+68h] [rbp-80h]
  __int128 v19; // [rsp+70h] [rbp-78h] BYREF
  __int64 v20; // [rsp+80h] [rbp-68h]
  _QWORD v21[12]; // [rsp+88h] [rbp-60h] BYREF

  v2 = *a2;
  v3 = (_QWORD *)a2[1];
  v4 = a2[2];
  v10 = v3;
  v11 = v3;
  v12 = v2;
  v13 = &v3[3 * v4];
  v5 = -1LL;
  if ( v4 )
  {
    do
    {
      v11 = v3 + 3;
      v6 = *v3;
      if ( *v3 == 0x8000000000000000LL )
        break;
      v7 = v3[1];
      if ( !v7 || (v8 = v3[2], v8 < 0) )
        core::panicking::panic_nounwind(anon_952b21e97a889c6613436287509e44a2_23_llvm_11215979972707939310, 162LL);
      core::num::<impl core::str::traits::FromStr for usize>::from_str(v14, v3[1], v3[2]);
      if ( (v14[0] & 1) != 0 )
      {
        v17[0] = 0LL;
        v17[1] = v7;
        v17[2] = v8;
        v18 = 1;
        v16[0] = v17;
        v16[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v21[0] = &off_122558;
        v21[1] = 1LL;
        v21[2] = v16;
        v21[3] = 1LL;
        v21[4] = 0LL;
        alloc::fmt::format::format_inner(&v19, v21);
        *(_QWORD *)(a1 + 16) = v20;
        *(_OWORD *)a1 = v19;
        if ( v6 )
          _rust_dealloc(v7, v6, 1LL);
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v10);
        return a1;
      }
      if ( v5 >= v15 )
        v5 = v15;
      if ( v6 )
        _rust_dealloc(v7, v6, 1LL);
      v3 = v11;
    }
    while ( v11 != v13 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v10);
  result = a1;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return result;
}
