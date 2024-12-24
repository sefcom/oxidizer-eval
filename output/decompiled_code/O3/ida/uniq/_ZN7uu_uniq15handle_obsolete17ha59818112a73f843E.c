__int64 __fastcall uu_uniq::handle_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 *v6; // rax
  __int64 result; // rax
  char v8; // [rsp+6h] [rbp-C2h] BYREF
  char v9; // [rsp+7h] [rbp-C1h] BYREF
  unsigned __int64 *v10; // [rsp+8h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+10h] [rbp-B8h]
  char *v12; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v13; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+30h] [rbp-98h]
  unsigned __int64 v15; // [rsp+40h] [rbp-88h] BYREF
  __int128 v16; // [rsp+48h] [rbp-80h]
  __int128 v17; // [rsp+58h] [rbp-70h] BYREF
  __int64 v18; // [rsp+68h] [rbp-60h]
  _BYTE v19[88]; // [rsp+70h] [rbp-58h] BYREF

  v13 = 0x8000000000000000LL;
  v15 = 0x8000000000000000LL;
  v8 = 0;
  v9 = 0;
  v10 = &v13;
  *(_QWORD *)&v11 = &v15;
  *((_QWORD *)&v11 + 1) = &v8;
  v12 = &v9;
  core::iter::traits::iterator::Iterator::filter_map(v19, a2, a3, &v10);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v17, v19);
  if ( v13 != 0x8000000000000000LL )
  {
    v11 = v14;
    v10 = (unsigned __int64 *)v13;
    v5 = uu_uniq::handle_obsolete::{{closure}}(&v10);
    v3 = v4;
    v6 = (unsigned __int64 *)v15;
    if ( v15 == 0x8000000000000000LL )
      goto LABEL_3;
LABEL_5:
    v11 = v16;
    v10 = v6;
    result = uu_uniq::handle_obsolete::{{closure}}(&v10);
    goto LABEL_6;
  }
  v5 = 0LL;
  v6 = (unsigned __int64 *)v15;
  if ( v15 != 0x8000000000000000LL )
    goto LABEL_5;
LABEL_3:
  result = 0LL;
LABEL_6:
  *(_QWORD *)(a1 + 32) = v18;
  *(_OWORD *)(a1 + 16) = v17;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 40) = result;
  *(_QWORD *)(a1 + 48) = v4;
  return result;
}
