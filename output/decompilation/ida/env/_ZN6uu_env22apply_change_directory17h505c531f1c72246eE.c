__int64 __fastcall uu_env::apply_change_directory(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+10h] [rbp-98h] BYREF
  _QWORD *v16; // [rsp+20h] [rbp-88h]
  __int64 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+30h] [rbp-78h]
  _QWORD v19[4]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-48h] BYREF
  char v21; // [rsp+78h] [rbp-30h]
  __int128 v22; // [rsp+80h] [rbp-28h] BYREF
  _QWORD *v23; // [rsp+90h] [rbp-18h]

  v1 = a1[15];
  if ( a1[11] || !v1 )
  {
    if ( v1 && (v3 = a1[16], (v4 = std::env::set_current_dir(a1[15], v3)) != 0) )
    {
      v14 = v4;
      v20[0] = 1LL;
      v20[1] = v1;
      v20[2] = v3;
      v21 = 1;
      v19[0] = v20;
      v19[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v19[2] = &v14;
      v19[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v15 = &off_148BF8;
      *((_QWORD *)&v15 + 1) = 2LL;
      v18 = 0LL;
      v16 = v19;
      v17 = 2LL;
      core::option::Option<T>::map_or_else(&v22, &v15, v5, v6, v7, v8);
      LODWORD(v17) = 125;
      v15 = v22;
      v16 = v23;
      v13 = alloc::boxed::Box<T>::new(&v15, &v15, v9, v10, v11, v12);
      core::ptr::drop_in_place<std::io::error::Error>(&v14);
      return v13;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v15, aMustSpecifyCom, 38LL);
    LODWORD(v17) = 125;
    return alloc::boxed::Box<T>::new(&v15);
  }
}
