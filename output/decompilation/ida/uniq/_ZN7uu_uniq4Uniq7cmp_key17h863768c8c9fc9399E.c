__int64 __fastcall uu_uniq::Uniq::cmp_key(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v18; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+8h] [rbp-70h]
  __int64 v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  unsigned __int64 v26; // [rsp+40h] [rbp-38h]

  uu_uniq::Uniq::skip_fields(&v24, *(_QWORD *)a1, *(_QWORD *)(a1 + 8), a2, a3);
  v6 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
    v6 = *(_QWORD *)(a1 + 24);
  v7 = v25;
  v8 = v26 - v6;
  if ( v26 < v6 )
    v8 = 0LL;
  v9 = 1LL;
  if ( v26 > v6 )
    v9 = v25 + v6;
  core::str::converts::from_utf8(&v18, v9, v8);
  if ( (_DWORD)v18 == 1 )
  {
    v18 = v9;
    v19 = v9 + v8;
    v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v18, &unk_F57A8);
  }
  else
  {
    v11 = v19;
    v12 = v19 + v20;
    v13 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v19, v19 + v20);
    v14 = v13;
    if ( *(_BYTE *)(a1 + 32) )
      v14 = *(_QWORD *)(a1 + 40);
    v15 = core::cmp::Ord::min(v14, v13);
    v21 = v11;
    v22 = v12;
    v23 = v15;
    if ( *(_BYTE *)(a1 + 52) )
    {
      v20 = v23;
      v18 = v21;
      v19 = v22;
      v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v18, &unk_F5770);
    }
    else
    {
      v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a4, &v21, &unk_F5738);
    }
  }
  v16 = v10;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v24, v7);
  return v16;
}