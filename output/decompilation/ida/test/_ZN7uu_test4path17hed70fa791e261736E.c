__int64 __fastcall uu_test::path(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebp
  __int64 v9; // rax
  unsigned int v10; // edx
  __gid_t v11; // eax
  _BYTE v12[176]; // [rsp+0h] [rbp-228h] BYREF
  char v13; // [rsp+B0h] [rbp-178h]
  _DWORD src[44]; // [rsp+B8h] [rbp-170h] BYREF
  _QWORD dest[24]; // [rsp+168h] [rbp-C0h] BYREF

  if ( a3 == 8 )
  {
    std::fs::symlink_metadata(src);
    if ( src[0] != 2 )
      goto LABEL_3;
LABEL_6:
    LODWORD(v4) = 0;
    goto LABEL_7;
  }
  std::fs::metadata(src);
  if ( src[0] == 2 )
    goto LABEL_6;
LABEL_3:
  memcpy(dest, src, 0xB0uLL);
  LODWORD(v4) = dest[7];
  switch ( a3 )
  {
    case 0:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 24576;
      break;
    case 1:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 0x2000;
      break;
    case 2:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 0x4000;
      break;
    case 3:
      LOBYTE(v4) = 1;
      break;
    case 4:
      std::fs::Metadata::accessed(v12, dest);
      v4 = core::result::Result<T,E>::unwrap(v12, &off_E0440);
      v8 = v7;
      std::fs::Metadata::modified(v12, dest);
      v9 = core::result::Result<T,E>::unwrap(v12, &off_E0458);
      if ( v4 == v9 )
        LOBYTE(v4) = v8 < v10;
      else
        LOBYTE(v4) = v4 < v9;
      break;
    case 5:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 0x8000;
      break;
    case 6:
      LODWORD(v4) = (LODWORD(dest[7]) >> 10) & 1;
      break;
    case 7:
      LODWORD(v4) = dest[8];
      v11 = uucore::features::process::getegid();
      goto LABEL_26;
    case 8:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 40960;
      break;
    case 9:
      LODWORD(v4) = (LODWORD(dest[7]) >> 9) & 1;
      break;
    case 10:
      LODWORD(v4) = HIDWORD(dest[7]);
      v11 = uucore::features::process::geteuid();
LABEL_26:
      LOBYTE(v4) = (_DWORD)v4 == v11;
      break;
    case 11:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 4096;
      break;
    case 12:
      memcpy(v12, src, sizeof(v12));
      v13 = 4;
      v6 = uu_test::path::{{closure}}(v12, 4LL);
      goto LABEL_21;
    case 13:
      LODWORD(v4) = dest[7] & 0xF000;
      LOBYTE(v4) = (_DWORD)v4 == 49152;
      break;
    case 14:
      LOBYTE(v4) = dest[10] != 0LL;
      break;
    case 15:
      LODWORD(v4) = (LODWORD(dest[7]) >> 11) & 1;
      break;
    case 16:
      memcpy(v12, src, sizeof(v12));
      v13 = 2;
      v6 = uu_test::path::{{closure}}(v12, 2LL);
      goto LABEL_21;
    case 17:
      memcpy(v12, src, sizeof(v12));
      v13 = 1;
      v6 = uu_test::path::{{closure}}(v12, 1LL);
LABEL_21:
      LODWORD(v4) = v6;
      break;
  }
LABEL_7:
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(src);
  return (unsigned int)v4;
}