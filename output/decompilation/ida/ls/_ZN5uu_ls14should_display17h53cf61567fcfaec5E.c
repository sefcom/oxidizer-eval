__int64 __fastcall uu_ls::should_display(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int16 v7; // [rsp+5h] [rbp-83h] BYREF
  char v8; // [rsp+7h] [rbp-81h]
  __int128 v9; // [rsp+8h] [rbp-80h] BYREF
  __int64 v10; // [rsp+18h] [rbp-70h]
  __int128 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+30h] [rbp-58h]
  __int128 v13; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-30h]
  __int64 v17; // [rsp+60h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 248) != 2 || !(unsigned __int8)uu_ls::is_hidden(a1) )
  {
    v7 = 1;
    v8 = 1;
    std::fs::DirEntry::file_name(&v15, a1);
    v3 = v16;
    core::str::converts::from_utf8(&v9, v16, v17);
    if ( (_DWORD)v9 == 1 )
    {
      alloc::string::String::from_utf8_lossy(&v13, v3);
      if ( !__OFSUB__(0LL, (_QWORD)v13) )
      {
        v12 = v14;
        v4 = v13;
        goto LABEL_10;
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, *((_QWORD *)&v13 + 1), v14);
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, *((_QWORD *)&v9 + 1), v10);
    }
    v12 = v10;
    v4 = v9;
LABEL_10:
    v11 = v4;
    v5 = *(_QWORD *)(a2 + 8) + 56LL * *(_QWORD *)(a2 + 16);
    *(_QWORD *)&v9 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)&v9 + 1) = v5;
    v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v9, &v11, &v7);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
    LOBYTE(v2) = v2 ^ 1;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v15, v3);
    return v2;
  }
  return 0;
}