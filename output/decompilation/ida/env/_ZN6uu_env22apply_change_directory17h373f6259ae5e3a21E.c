__int64 __fastcall uu_env::apply_change_directory(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-A8h]
  __int64 v11; // [rsp+8h] [rbp-A0h] BYREF
  __int128 v12; // [rsp+10h] [rbp-98h] BYREF
  _QWORD *v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+30h] [rbp-78h]
  _QWORD v16[4]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-48h] BYREF
  char v18; // [rsp+78h] [rbp-30h]
  __int128 v19; // [rsp+80h] [rbp-28h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp-18h]

  v1 = a1[15];
  if ( a1[11] != 0LL || v1 == 0 )
  {
    if ( v1 && (v2 = a1[16], (v3 = std::env::set_current_dir(a1[15], v2)) != 0) )
    {
      v11 = v3;
      v17[0] = 1LL;
      v17[1] = v1;
      v17[2] = v2;
      v18 = 1;
      v16[0] = v17;
      v16[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v16[2] = &v11;
      v16[3] = <std::io::error::Error as core::fmt::Display>::fmt;
      *(_QWORD *)&v12 = &off_110C88;
      *((_QWORD *)&v12 + 1) = 2LL;
      v15 = 0LL;
      v13 = v16;
      v14 = 2LL;
      core::option::Option<T>::map_or_else(&v19, &v12, v4, v5, v6, v7, v10);
      LODWORD(v14) = 125;
      v12 = v19;
      v13 = v20;
      v8 = alloc::boxed::Box<T>::new(&v12);
      core::ptr::drop_in_place<std::io::error::Error>(&v11);
      return v8;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v12, aMustSpecifyCom, 38LL);
    LODWORD(v14) = 125;
    return alloc::boxed::Box<T>::new(&v12);
  }
}