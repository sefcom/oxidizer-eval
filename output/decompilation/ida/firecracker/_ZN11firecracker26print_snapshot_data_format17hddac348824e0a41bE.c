__int64 __fastcall firecracker::print_snapshot_data_format(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax
  char *v3; // rax
  __int128 v4; // xmm0
  unsigned int v5; // [rsp+Ch] [rbp-CCh] BYREF
  char *v6; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v7; // [rsp+18h] [rbp-C0h]
  __int128 v8; // [rsp+28h] [rbp-B0h]
  __int64 v9; // [rsp+38h] [rbp-A0h]
  __int128 v10; // [rsp+40h] [rbp-98h]
  __int128 v11; // [rsp+50h] [rbp-88h]
  __int64 v12; // [rsp+60h] [rbp-78h]
  _OWORD v13[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v14; // [rsp+90h] [rbp-48h]
  _QWORD v15[7]; // [rsp+A0h] [rbp-38h] BYREF

  std::fs::File::open(&v6);
  if ( (_DWORD)v6 == 1 )
  {
    v1 = v7;
    *(_QWORD *)a1 = 6LL;
    *(_DWORD *)(a1 + 8) = v1;
    result = HIDWORD(v1);
    *(_DWORD *)(a1 + 12) = result;
  }
  else
  {
    v5 = HIDWORD(v6);
    vmm::snapshot::get_format_version(&v6, &v5);
    v3 = v6;
    v15[4] = v9;
    v10 = v7;
    v11 = v8;
    v12 = v9;
    if ( v6 == &byte_6 )
    {
      v14 = v12;
      v13[1] = v11;
      v13[0] = v10;
      v15[0] = v13;
      v15[1] = semver::display::<impl core::fmt::Display for semver::Version>::fmt;
      v6 = (char *)&off_3A3EF0;
      *(_QWORD *)&v7 = 2LL;
      *((_QWORD *)&v7 + 1) = v15;
      v8 = 1uLL;
      std::io::stdio::_print(&v6);
      *(_QWORD *)a1 = 7LL;
      core::ptr::drop_in_place<semver::Version>(v13);
    }
    else
    {
      *(_QWORD *)(a1 + 40) = v12;
      v4 = v10;
      *(_OWORD *)(a1 + 24) = v11;
      *(_OWORD *)(a1 + 8) = v4;
      *(_QWORD *)a1 = v3;
    }
    return core::ptr::drop_in_place<std::fs::File>(v5);
  }
  return result;
}