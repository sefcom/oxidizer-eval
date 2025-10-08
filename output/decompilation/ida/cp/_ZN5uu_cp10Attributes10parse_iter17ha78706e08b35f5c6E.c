__int64 __fastcall uu_cp::Attributes::parse_iter(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // [rsp+8h] [rbp-C0h] BYREF
  int v11; // [rsp+10h] [rbp-B8h]
  __int64 v12; // [rsp+18h] [rbp-B0h] BYREF
  int v13; // [rsp+20h] [rbp-A8h]
  __int64 v14; // [rsp+28h] [rbp-A0h]
  __int64 v15; // [rsp+34h] [rbp-94h] BYREF
  int v16; // [rsp+3Ch] [rbp-8Ch]
  _OWORD v17[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v18[2]; // [rsp+60h] [rbp-68h] BYREF
  int v19; // [rsp+70h] [rbp-58h]
  __int128 v20; // [rsp+74h] [rbp-54h]
  __int128 v21; // [rsp+84h] [rbp-44h]
  int v22; // [rsp+94h] [rbp-34h]

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
      v4 = <&T as core::convert::AsRef<U>>::as_ref(v3);
      uu_cp::Attributes::parse_single_string(v18, v4);
      v5 = v18[0];
      v12 = v18[1];
      v13 = v19;
      if ( v18[0] != 0x800000000000000CLL )
        break;
      uu_cp::Attributes::union(&v15, (unsigned __int8 *)&v10, (unsigned __int8 *)&v12);
      v11 = v16;
      v10 = v15;
      v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v17);
      if ( !v3 )
        goto LABEL_4;
    }
    v8 = v14;
    *(_DWORD *)(v14 + 52) = v22;
    v9 = v20;
    *(_OWORD *)(v8 + 36) = v21;
    *(_OWORD *)(v8 + 20) = v9;
    *(_DWORD *)(v8 + 16) = v13;
    *(_QWORD *)(v8 + 8) = v12;
    *(_QWORD *)v8 = v5;
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v17);
  }
  else
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(v17);
    v6 = (_QWORD *)v14;
    *(_DWORD *)(v14 + 16) = v11;
    v6[1] = v10;
    result = 0x800000000000000CLL;
    *v6 = 0x800000000000000CLL;
  }
  return result;
}