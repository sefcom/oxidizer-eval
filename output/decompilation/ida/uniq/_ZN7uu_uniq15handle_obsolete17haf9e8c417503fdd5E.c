__int64 __fastcall uu_uniq::handle_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 result; // rax
  char v8; // [rsp+6h] [rbp-A2h] BYREF
  char v9; // [rsp+7h] [rbp-A1h] BYREF
  __int128 v10; // [rsp+8h] [rbp-A0h] BYREF
  char *v11; // [rsp+18h] [rbp-90h]
  char *v12; // [rsp+20h] [rbp-88h]
  unsigned __int64 v13; // [rsp+28h] [rbp-80h] BYREF
  __int128 v14; // [rsp+30h] [rbp-78h]
  unsigned __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  __int128 v16; // [rsp+48h] [rbp-60h]
  unsigned __int64 v17; // [rsp+58h] [rbp-50h] BYREF
  __int128 v18; // [rsp+60h] [rbp-48h]

  v13 = 0x8000000000000000LL;
  v15 = 0x8000000000000000LL;
  v8 = 0;
  v9 = 0;
  *(_QWORD *)&v10 = &v13;
  *((_QWORD *)&v10 + 1) = &v15;
  v11 = &v8;
  v12 = &v9;
  core::iter::traits::iterator::Iterator::filter_map(&v17, a2, a3, &v10);
  core::iter::traits::iterator::Iterator::collect(&v10, &v17);
  if ( v13 != 0x8000000000000000LL )
  {
    v18 = v14;
    v17 = v13;
    v5 = uu_uniq::handle_obsolete::{{closure}}(&v17);
    v3 = v4;
    v6 = v15;
    if ( v15 != 0x8000000000000000LL )
      goto LABEL_3;
LABEL_5:
    result = 0LL;
    goto LABEL_6;
  }
  v5 = 0LL;
  v6 = v15;
  if ( v15 == 0x8000000000000000LL )
    goto LABEL_5;
LABEL_3:
  v18 = v16;
  v17 = v6;
  result = uu_uniq::handle_obsolete::{{closure}}(&v17);
LABEL_6:
  *(_QWORD *)(a1 + 32) = v11;
  *(_OWORD *)(a1 + 16) = v10;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 40) = result;
  *(_QWORD *)(a1 + 48) = v4;
  return result;
}