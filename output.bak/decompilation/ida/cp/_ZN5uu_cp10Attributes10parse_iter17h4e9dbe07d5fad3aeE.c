__int64 __fastcall uu_cp::Attributes::parse_iter(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-D0h] BYREF
  int v11; // [rsp+10h] [rbp-C8h]
  __int64 v12; // [rsp+18h] [rbp-C0h] BYREF
  int v13; // [rsp+20h] [rbp-B8h]
  __int64 v14; // [rsp+28h] [rbp-B0h]
  __int64 v15; // [rsp+34h] [rbp-A4h] BYREF
  int v16; // [rsp+3Ch] [rbp-9Ch]
  _OWORD v17[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-70h] BYREF
  int v19; // [rsp+78h] [rbp-60h]
  __int128 v20; // [rsp+7Ch] [rbp-5Ch]
  _OWORD v21[4]; // [rsp+8Ch] [rbp-4Ch]

  v14 = a1;
  v11 = 0;
  v10 = 0LL;
  v2 = *a2;
  v17[1] = a2[1];
  v17[0] = v2;
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v17);
  if ( v3 )
  {
    while ( 1 )
    {
      <&T as core::convert::AsRef<U>>::as_ref(v3);
      uu_cp::Attributes::parse_single_string((__int64)v18);
      v4 = v18[0];
      v12 = v18[1];
      v13 = v19;
      if ( v18[0] != 13LL )
        break;
      uu_cp::Attributes::union(&v15, (unsigned __int8 *)&v10, (unsigned __int8 *)&v12);
      v11 = v16;
      v10 = v15;
      v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v17);
      if ( !v3 )
        goto LABEL_4;
    }
    v7 = v20;
    v8 = v21[0];
    v9 = v14;
    *(_OWORD *)(v14 + 48) = *(_OWORD *)((char *)v21 + 12);
    *(_OWORD *)(v9 + 36) = v8;
    *(_OWORD *)(v9 + 20) = v7;
    *(_DWORD *)(v9 + 16) = v13;
    *(_QWORD *)(v9 + 8) = v12;
    *(_QWORD *)v9 = v4;
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v17);
  }
  else
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v17);
    v5 = (_QWORD *)v14;
    *(_DWORD *)(v14 + 16) = v11;
    result = v10;
    v5[1] = v10;
    *v5 = 13LL;
  }
  return result;
}
