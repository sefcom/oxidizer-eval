__int64 __fastcall uu_shred::wipe_name(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  int v10; // r14d
  __int64 v11; // rax
  __int128 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  _OWORD *v15; // rcx
  __int128 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-218h] BYREF
  __int128 v18; // [rsp+8h] [rbp-210h]
  __int64 (__fastcall *v19)(); // [rsp+18h] [rbp-200h]
  _BYTE v20[24]; // [rsp+20h] [rbp-1F8h] BYREF
  _BYTE v21[24]; // [rsp+40h] [rbp-1D8h] BYREF
  int v22; // [rsp+58h] [rbp-1C0h]
  int v23; // [rsp+5Ch] [rbp-1BCh]
  _BYTE v24[24]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1A0h]
  __int64 v26; // [rsp+80h] [rbp-198h]
  __int64 v27; // [rsp+90h] [rbp-188h] BYREF
  __int64 v28; // [rsp+98h] [rbp-180h]
  _OWORD v29[2]; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v30[2]; // [rsp+C8h] [rbp-150h] BYREF
  char v31; // [rsp+D8h] [rbp-140h]
  __int128 dest; // [rsp+E0h] [rbp-138h] BYREF
  __int64 *v33; // [rsp+F0h] [rbp-128h]
  __int64 (__fastcall *v34)(); // [rsp+F8h] [rbp-120h]
  __int64 *v35; // [rsp+100h] [rbp-118h]
  __int64 (__fastcall *v36)(); // [rsp+108h] [rbp-110h]
  _BYTE v37[24]; // [rsp+190h] [rbp-88h] BYREF
  char v38; // [rsp+1A8h] [rbp-70h]
  _OWORD v39[2]; // [rsp+1B0h] [rbp-68h] BYREF
  _QWORD v40[9]; // [rsp+1D0h] [rbp-48h] BYREF

  v22 = a5;
  v23 = a4;
  v28 = a1;
  v7 = std::path::Path::file_name(a2, a3);
  if ( !v7 )
    core::option::unwrap_failed(&off_FA290);
  core::str::converts::from_utf8(&dest, v7);
  if ( (dest & 1) != 0 )
    core::option::unwrap_failed(&off_FA2A8);
  v8 = v33;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, a2, a3);
  *(_QWORD *)&v20[16] = v33;
  *(_OWORD *)v20 = dest;
  v30[0] = 1LL;
  v30[1] = v8;
  v31 = 0;
  while ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back(v30) & 1) != 0 )
  {
    uu_shred::FilenameIter::new((__int64)v39);
    v29[1] = v39[1];
    v29[0] = v39[0];
    while ( 1 )
    {
      <uu_shred::FilenameIter as core::iter::traits::iterator::Iterator>::next(v40, v29);
      if ( __OFSUB__(0LL, v40[0]) )
        break;
      std::path::Path::with_file_name(v21, a2, a3, v40);
      v9 = *(_QWORD *)&v21[8];
      std::fs::metadata(&dest);
      v10 = dest;
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v9);
      if ( v10 == 2 )
      {
        v11 = std::fs::rename(v20, v21);
        if ( v11 )
        {
          v27 = v11;
          *(_QWORD *)&v16 = uucore::util_name();
          *(_OWORD *)v24 = v16;
          v17 = (__int64)v24;
          *(_QWORD *)&v18 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &unk_F9F98;
          *((_QWORD *)&dest + 1) = 2LL;
          v35 = 0LL;
          v33 = &v17;
          v34 = (__int64 (__fastcall *)())(&dword_0 + 1);
          std::io::stdio::_eprint(&dest);
          *(_QWORD *)v37 = 1LL;
          *(_OWORD *)&v37[8] = *(_OWORD *)&v20[8];
          v38 = 0;
          v17 = 1LL;
          v18 = *(_OWORD *)&v21[8];
          LOBYTE(v19) = 1;
          *(_QWORD *)&dest = v37;
          *((_QWORD *)&dest + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
          v33 = &v17;
          v34 = <os_display::Quoted as core::fmt::Display>::fmt;
          v35 = &v27;
          v36 = <std::io::error::Error as core::fmt::Display>::fmt;
          *(_QWORD *)v24 = &unk_FA250;
          *(_QWORD *)&v24[8] = 4LL;
          v26 = 0LL;
          *(_QWORD *)&v24[16] = &dest;
          v25 = 3LL;
          std::io::stdio::_eprint(v24);
          std::process::exit(1);
        }
        if ( (_BYTE)v23 )
        {
          *(_QWORD *)&v12 = uucore::util_name();
          *(_OWORD *)v24 = v12;
          v17 = (__int64)v24;
          *(_QWORD *)&v18 = <&T as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &unk_F9F98;
          *((_QWORD *)&dest + 1) = 2LL;
          v35 = 0LL;
          v33 = &v17;
          v34 = (__int64 (__fastcall *)())(&dword_0 + 1);
          std::io::stdio::_eprint(&dest);
          *(_QWORD *)v24 = 1LL;
          *(_OWORD *)&v24[8] = *(_OWORD *)&v20[8];
          LOBYTE(v25) = 0;
          *(_OWORD *)v37 = *(_OWORD *)&v21[8];
          v17 = (__int64)v24;
          *(_QWORD *)&v18 = <os_display::Quoted as core::fmt::Display>::fmt;
          *((_QWORD *)&v18 + 1) = v37;
          v19 = <std::path::Display as core::fmt::Display>::fmt;
          *(_QWORD *)&dest = &unk_FA220;
          *((_QWORD *)&dest + 1) = 3LL;
          v35 = 0LL;
          v33 = &v17;
          v34 = (__int64 (__fastcall *)())(&dword_0 + 2);
          std::io::stdio::_eprint(&dest);
        }
        if ( (_BYTE)v22 == 3 )
        {
          v17 = 0x1B600000000LL;
          WORD2(v18) = 0;
          LODWORD(v18) = 256;
          <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&dest, *(_QWORD *)&v21[8], *(_QWORD *)&v21[16]);
          *(_QWORD *)&v24[16] = v33;
          *(_OWORD *)v24 = dest;
          std::fs::OpenOptions::open(&dest, &v17, v24);
          *(_DWORD *)v24 = core::result::Result<T,E>::expect(&dest);
          v13 = std::fs::File::sync_all(v24);
          core::result::Result<T,E>::expect(v13);
          core::ptr::drop_in_place<std::fs::File>(*(unsigned int *)v24);
        }
        v33 = *(__int64 **)&v21[16];
        dest = *(_OWORD *)v21;
        core::ptr::drop_in_place<std::path::PathBuf>(*(_QWORD *)v20, *(_QWORD *)&v20[8]);
        *(_QWORD *)&v20[16] = v33;
        *(_OWORD *)v20 = dest;
        break;
      }
      core::ptr::drop_in_place<std::path::PathBuf>(*(_QWORD *)v21, *(_QWORD *)&v21[8]);
    }
    core::ptr::drop_in_place<uu_shred::FilenameIter>(*(_QWORD *)&v29[0], *((_QWORD *)&v29[0] + 1));
  }
  result = *(_QWORD *)&v20[16];
  v15 = (_OWORD *)v28;
  *(_QWORD *)(v28 + 16) = *(_QWORD *)&v20[16];
  *v15 = *(_OWORD *)v20;
  return result;
}