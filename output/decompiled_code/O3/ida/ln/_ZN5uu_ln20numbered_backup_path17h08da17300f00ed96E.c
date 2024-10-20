__int64 __fastcall uu_ln::numbered_backup_path(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  const void *v5; // r12
  __int64 v6; // rbx
  __int64 result; // rax
  _OWORD *v8; // rcx
  __int64 v9; // [rsp+8h] [rbp-130h] BYREF
  __int128 v10; // [rsp+10h] [rbp-128h] BYREF
  __int64 v11; // [rsp+20h] [rbp-118h]
  __int64 v12; // [rsp+28h] [rbp-110h]
  _QWORD v13[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v14; // [rsp+40h] [rbp-F8h] BYREF
  const void *v15; // [rsp+48h] [rbp-F0h]
  size_t v16; // [rsp+50h] [rbp-E8h]
  char **dest; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-D8h]
  _QWORD *v19; // [rsp+68h] [rbp-D0h]
  __int64 v20; // [rsp+70h] [rbp-C8h]
  __int64 v21; // [rsp+78h] [rbp-C0h]

  v12 = a1;
  v9 = 1LL;
  while ( 1 )
  {
    v13[0] = &v9;
    v13[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    dest = &off_EFB58;
    v18 = 2LL;
    v21 = 0LL;
    v19 = v13;
    v20 = 1LL;
    alloc::fmt::format::format_inner(&v14, &dest);
    v4 = v14;
    v5 = v15;
    uu_ln::simple_backup_path((__int64)&v10, a2, a3, v15, v16);
    if ( v4 )
      _rust_dealloc(v5, v4, 1LL);
    v6 = *((_QWORD *)&v10 + 1);
    std::sys::pal::unix::fs::stat(&dest);
    if ( (_DWORD)dest == 2 )
      break;
    ++v9;
    if ( (_QWORD)v10 )
      _rust_dealloc(v6, v10, 1LL);
  }
  core::ptr::drop_in_place<std::io::error::Error>(v18);
  result = v11;
  v8 = (_OWORD *)v12;
  *(_QWORD *)(v12 + 16) = v11;
  *v8 = v10;
  return result;
}
