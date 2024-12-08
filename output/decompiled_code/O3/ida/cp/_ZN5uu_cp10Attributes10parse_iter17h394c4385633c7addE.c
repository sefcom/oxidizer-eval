__int64 __fastcall uu_cp::Attributes::parse_iter(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-D0h] BYREF
  int v12; // [rsp+10h] [rbp-C8h]
  __int64 v13; // [rsp+18h] [rbp-C0h] BYREF
  int v14; // [rsp+20h] [rbp-B8h]
  __int64 v15; // [rsp+28h] [rbp-B0h]
  __int64 v16; // [rsp+34h] [rbp-A4h] BYREF
  int v17; // [rsp+3Ch] [rbp-9Ch]
  _OWORD v18[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-70h] BYREF
  int v20; // [rsp+78h] [rbp-60h]
  __int128 v21; // [rsp+7Ch] [rbp-5Ch]
  _OWORD v22[4]; // [rsp+8Ch] [rbp-4Ch]

  v15 = a1;
  v12 = 0;
  v11 = 0LL;
  v2 = *a2;
  v18[1] = a2[1];
  v18[0] = v2;
  v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v18);
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = <&T as core::convert::AsRef<U>>::as_ref(v3);
      uu_cp::Attributes::parse_single_string(v19, v4);
      v5 = v19[0];
      v13 = v19[1];
      v14 = v20;
      if ( v19[0] != 13LL )
        break;
      uu_cp::Attributes::union(&v16, (unsigned __int8 *)&v11, (unsigned __int8 *)&v13);
      v12 = v17;
      v11 = v16;
      v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v18);
      if ( !v3 )
        goto LABEL_4;
    }
    v8 = v21;
    v9 = v22[0];
    v10 = v15;
    *(_OWORD *)(v15 + 48) = *(_OWORD *)((char *)v22 + 12);
    *(_OWORD *)(v10 + 36) = v9;
    *(_OWORD *)(v10 + 20) = v8;
    *(_DWORD *)(v10 + 16) = v14;
    *(_QWORD *)(v10 + 8) = v13;
    *(_QWORD *)v10 = v5;
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v18);
  }
  else
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v18);
    v6 = (_QWORD *)v15;
    *(_DWORD *)(v15 + 16) = v12;
    result = v11;
    v6[1] = v11;
    *v6 = 13LL;
  }
  return result;
}
