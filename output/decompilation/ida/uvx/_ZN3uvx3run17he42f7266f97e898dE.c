__int64 __fastcall uvx::run(__int64 a1)
{
  __int128 v1; // kr00_16
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 uvx_suffix; // rax
  __int128 v8; // kr10_16
  __int64 v9; // [rsp+0h] [rbp-158h]
  _BYTE v10[8]; // [rsp+8h] [rbp-150h] BYREF
  __int64 v11; // [rsp+10h] [rbp-148h]
  __int64 v12; // [rsp+18h] [rbp-140h]
  __int128 v13; // [rsp+20h] [rbp-138h] BYREF
  __int128 v14; // [rsp+30h] [rbp-128h]
  __int64 v15; // [rsp+40h] [rbp-118h]
  __int128 dest; // [rsp+48h] [rbp-110h] BYREF
  __int128 v17; // [rsp+58h] [rbp-100h]

  std::env::current_exe(&dest);
  v1 = dest;
  result = -(__int64)dest;
  if ( __OFSUB__(-(__int64)dest, 1LL) )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&dest + 1);
    *(_DWORD *)a1 = 1;
  }
  else
  {
    v3 = v17;
    v5 = std::path::Path::parent(*((_QWORD *)&dest + 1), v17);
    if ( v5 )
    {
      v6 = v4;
      uvx_suffix = uvx::get_uvx_suffix(*((_QWORD *)&v1 + 1), v3);
      uvx::get_uv_path((__int64)&dest, v5, v6, uvx_suffix);
      v8 = dest;
      if ( (_QWORD)dest == 0x8000000000000000LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&dest + 1);
        *(_DWORD *)a1 = 1;
      }
      else
      {
        v9 = v17;
        std::env::args_os(&dest);
        v14 = v17;
        v13 = dest;
        v15 = 1LL;
        core::iter::traits::iterator::Iterator::chain(&dest, &v13);
        core::iter::traits::iterator::Iterator::collect(v10, &dest);
        v13 = v8;
        *(_QWORD *)&v14 = v9;
        std::process::Command::new(&dest);
        std::process::Command::args(&dest, v11, v12);
        *(_QWORD *)(a1 + 8) = uvx::exec_spawn(&dest);
        *(_DWORD *)a1 = 1;
        core::ptr::drop_in_place<std::process::Command>(&dest);
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(v10);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8) = std::io::error::Error::new(0LL, aCouldNotDeterm, 52LL);
      *(_DWORD *)a1 = 1;
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(v1, *((_QWORD *)&v1 + 1));
  }
  return result;
}