__int64 __fastcall uu_shred::wipe_name(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rax
  __int128 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  _OWORD *v12; // rcx
  __int128 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-228h] BYREF
  __int128 v15; // [rsp+8h] [rbp-220h]
  __int64 (__fastcall *v16)(); // [rsp+18h] [rbp-210h]
  _BYTE v17[24]; // [rsp+20h] [rbp-208h] BYREF
  int v18; // [rsp+38h] [rbp-1F0h]
  int v19; // [rsp+3Ch] [rbp-1ECh]
  _BYTE v20[24]; // [rsp+40h] [rbp-1E8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-1D0h]
  __int64 v22; // [rsp+60h] [rbp-1C8h]
  _BYTE v23[24]; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v24; // [rsp+90h] [rbp-198h] BYREF
  __int64 v25; // [rsp+98h] [rbp-190h]
  __int128 v26; // [rsp+A0h] [rbp-188h] BYREF
  __int64 *v27; // [rsp+B0h] [rbp-178h]
  __int64 (__fastcall *v28)(); // [rsp+B8h] [rbp-170h]
  __int64 *v29; // [rsp+C0h] [rbp-168h]
  __int64 (__fastcall *v30)(); // [rsp+C8h] [rbp-160h]
  _QWORD v31[2]; // [rsp+150h] [rbp-D8h] BYREF
  char v32; // [rsp+160h] [rbp-C8h]
  _BYTE v33[24]; // [rsp+168h] [rbp-C0h] BYREF
  char v34; // [rsp+180h] [rbp-A8h]
  __int128 v35; // [rsp+188h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+198h] [rbp-90h]
  _OWORD v37[2]; // [rsp+1A0h] [rbp-88h] BYREF
  __int128 v38; // [rsp+1C0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+1D0h] [rbp-58h]
  _OWORD v40[5]; // [rsp+1D8h] [rbp-50h] BYREF

  v18 = a5;
  v19 = a4;
  v25 = a1;
  v6 = std::path::Path::file_name(a2, a3);
  if ( !v6 )
    core::option::unwrap_failed(&off_137DB0);
  std::sys::os_str::bytes::Slice::to_str(&v26, v6);
  if ( (_QWORD)v26 )
    core::option::unwrap_failed(&off_137DC8);
  v7 = v27;
  std::sys::os_str::bytes::Slice::to_owned(&v26, a2, a3);
  *(_QWORD *)&v17[16] = v27;
  *(_OWORD *)v17 = v26;
  v31[0] = 1LL;
  v31[1] = v7;
  v32 = 0;
  while ( <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back(v31) )
  {
    uu_shred::FilenameIter::new((__int64)v40);
    v37[1] = v40[1];
    v37[0] = v40[0];
    while ( 1 )
    {
      <uu_shred::FilenameIter as core::iter::traits::iterator::Iterator>::next(&v35, v37);
      if ( (_QWORD)v35 == 0x8000000000000000LL )
        break;
      v39 = v36;
      v38 = v35;
      std::path::Path::with_file_name(v23, a2, a3, &v38);
      std::fs::metadata(&v26, *(_QWORD *)&v23[8], *(_QWORD *)&v23[16]);
      if ( (_DWORD)v26 == 2 )
      {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v26);
        v8 = std::fs::rename(v17, v23);
        if ( v8 )
        {
          v24 = v8;
          *(_QWORD *)&v13 = uucore::util_name();
          *(_OWORD *)v20 = v13;
          v14 = (__int64)v20;
          *(_QWORD *)&v15 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v26 = &unk_137BF0;
          *((_QWORD *)&v26 + 1) = 2LL;
          v29 = 0LL;
          v27 = &v14;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 1);
          std::io::stdio::_eprint(&v26);
          *(_QWORD *)v33 = 1LL;
          *(_OWORD *)&v33[8] = *(_OWORD *)&v17[8];
          v34 = 0;
          v14 = 1LL;
          v15 = *(_OWORD *)&v23[8];
          LOBYTE(v16) = 1;
          *(_QWORD *)&v26 = v33;
          *((_QWORD *)&v26 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v27 = &v14;
          v28 = <os_display::Quoted as core::fmt::Display>::fmt;
          v29 = &v24;
          v30 = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)v20 = &unk_137E40;
          *(_QWORD *)&v20[8] = 4LL;
          v22 = 0LL;
          *(_QWORD *)&v20[16] = &v26;
          v21 = 3LL;
          std::io::stdio::_eprint(v20);
          std::process::exit(1);
        }
        if ( (_BYTE)v19 )
        {
          *(_QWORD *)&v9 = uucore::util_name();
          *(_OWORD *)v20 = v9;
          v14 = (__int64)v20;
          *(_QWORD *)&v15 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&v26 = &unk_137BF0;
          *((_QWORD *)&v26 + 1) = 2LL;
          v29 = 0LL;
          v27 = &v14;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 1);
          std::io::stdio::_eprint(&v26);
          *(_QWORD *)v20 = 1LL;
          *(_OWORD *)&v20[8] = *(_OWORD *)&v17[8];
          LOBYTE(v21) = 0;
          *(_OWORD *)v33 = *(_OWORD *)&v23[8];
          v14 = (__int64)v20;
          *(_QWORD *)&v15 = <os_display::Quoted as core::fmt::Display>::fmt;
          *((_QWORD *)&v15 + 1) = v33;
          v16 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)&v26 = &unk_137DE0;
          *((_QWORD *)&v26 + 1) = 3LL;
          v29 = 0LL;
          v27 = &v14;
          v28 = (__int64 (__fastcall *)())(&dword_0 + 2);
          std::io::stdio::_eprint(&v26);
        }
        if ( (_BYTE)v18 == 3 )
        {
          v14 = 0x1B600000000LL;
          WORD2(v15) = 0;
          LODWORD(v15) = 256;
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v26, v23);
          *(_QWORD *)&v20[16] = v27;
          *(_OWORD *)v20 = v26;
          std::fs::OpenOptions::open(&v26, &v14, v20);
          *(_DWORD *)v20 = core::result::Result<T,E>::expect(&v26);
          v10 = std::fs::File::sync_all(v20);
          core::result::Result<T,E>::expect(v10);
          core::ptr::drop_in_place<std::fs::File>(*(unsigned int *)v20);
        }
        v27 = *(__int64 **)&v23[16];
        v26 = *(_OWORD *)v23;
        core::ptr::drop_in_place<std::path::PathBuf>(v17);
        *(_QWORD *)&v17[16] = v27;
        *(_OWORD *)v17 = v26;
        break;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v26);
      core::ptr::drop_in_place<std::path::PathBuf>(v23);
    }
    core::ptr::drop_in_place<uu_shred::FilenameIter>(v37);
  }
  result = *(_QWORD *)&v17[16];
  v12 = (_OWORD *)v25;
  *(_QWORD *)(v25 + 16) = *(_QWORD *)&v17[16];
  *v12 = *(_OWORD *)v17;
  return result;
}
