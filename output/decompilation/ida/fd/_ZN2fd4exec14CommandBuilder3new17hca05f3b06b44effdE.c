__int64 __fastcall fd::exec::CommandBuilder::new(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-268h] BYREF
  __int64 v12; // [rsp+10h] [rbp-258h]
  __int128 v13; // [rsp+18h] [rbp-250h] BYREF
  __int64 v14; // [rsp+28h] [rbp-240h]
  __int64 v15; // [rsp+30h] [rbp-238h]
  __int64 v16; // [rsp+38h] [rbp-230h]
  __int64 v17; // [rsp+40h] [rbp-228h] BYREF
  __int128 v18; // [rsp+48h] [rbp-220h]
  __int64 v19; // [rsp+58h] [rbp-210h]
  __int128 v20; // [rsp+60h] [rbp-208h] BYREF
  _QWORD src[27]; // [rsp+70h] [rbp-1F8h] BYREF
  _OWORD v22[17]; // [rsp+150h] [rbp-118h] BYREF

  v16 = a4;
  v4 = a1;
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 8LL;
  v12 = 0LL;
  v17 = 2LL;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = 8LL;
  v14 = 0LL;
  if ( a3 )
  {
    v15 = a1;
    v6 = 32 * a3;
    v7 = 2LL;
    v8 = 2LL;
    do
    {
      if ( *a2 )
      {
        fd::fmt::FormatTemplate::generate(&v20, a2);
        if ( v8 == 2 )
        {
          alloc::vec::Vec<T,A>::push(&v11, &v20, &off_402200);
          v8 = 2LL;
        }
        else
        {
          alloc::vec::Vec<T,A>::push(&v13, &v20, &off_4021E8);
        }
      }
      else
      {
        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v20, a2[2], a2[3]);
        *(_QWORD *)&v22[1] = src[0];
        v22[0] = v20;
        core::ptr::drop_in_place<core::option::Option<fd::fmt::FormatTemplate>>(&v17);
        v17 = 0LL;
        v19 = *(_QWORD *)&v22[1];
        v18 = v22[0];
        v7 = 0LL;
        v8 = 0LL;
      }
      a2 += 4;
      v6 -= 32LL;
    }
    while ( v6 );
    v9 = *((_QWORD *)&v11 + 1);
    v4 = v15;
  }
  else
  {
    v9 = 8LL;
    v7 = 2LL;
  }
  fd::exec::CommandBuilder::new_command(&v20);
  if ( __OFSUB__(-(__int64)v20, 1LL) )
  {
    *(_QWORD *)(v4 + 8) = *((_QWORD *)&v20 + 1);
    *(_QWORD *)v4 = 2LL;
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v13, v9);
    core::ptr::drop_in_place<core::option::Option<fd::fmt::FormatTemplate>>(&v17);
    return core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v11, v9);
  }
  else
  {
    memcpy(&v22[1], src, 0xD8uLL);
    v22[0] = v20;
    src[0] = v12;
    v20 = v11;
    if ( v7 == 2 )
      core::option::unwrap_failed(&off_402218);
    *(_QWORD *)(v4 + 24) = v19;
    *(_OWORD *)(v4 + 8) = v18;
    *(_OWORD *)(v4 + 56) = v13;
    *(_QWORD *)(v4 + 72) = v14;
    memcpy((void *)(v4 + 80), v22, 0xE8uLL);
    *(_OWORD *)(v4 + 32) = v11;
    *(_QWORD *)(v4 + 48) = v12;
    *(_QWORD *)v4 = v7;
    *(_QWORD *)(v4 + 312) = 0LL;
    result = v16;
    *(_QWORD *)(v4 + 320) = v16;
    *(_BYTE *)(v4 + 328) = 2;
  }
  return result;
}