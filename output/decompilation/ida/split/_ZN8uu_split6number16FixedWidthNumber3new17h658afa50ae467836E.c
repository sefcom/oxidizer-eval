__int64 __fastcall uu_split::number::FixedWidthNumber::new(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  bool v12; // cf
  __int64 result; // rax
  __int128 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]

  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v14, a3, &off_10ABA8);
  v8 = *((_QWORD *)&v14 + 1);
  v9 = v15;
  v10 = v15 - 1;
  while ( v10 != -1 )
  {
    if ( !v9 )
      core::panicking::panic_bounds_check(v10, 0LL, &off_10ABC0, a2);
    if ( HIDWORD(a4) )
    {
      v11 = a4 / a2;
      v7 = a4 % a2;
    }
    else
    {
      v7 = (unsigned int)a4 % a2;
      v11 = (unsigned int)a4 / a2;
    }
    *(_BYTE *)(v8 + v10--) = v7;
    v12 = a4 < a2;
    a4 = v11;
    if ( v12 )
      goto LABEL_10;
  }
  if ( a4 )
  {
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v8, v7, a2);
  }
LABEL_10:
  result = v15;
  *(_QWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v14;
  *(_BYTE *)(a1 + 24) = a2;
  return result;
}