__int64 __fastcall uu_groups::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int128 v4; // kr00_16
  __int64 v5; // rbx
  __m256i *v6; // rbx
  void (__fastcall *v7)(__m256i *, _QWORD); // rbp
  __int128 *v8; // r14
  __int128 v9; // rax
  __int128 *v10; // r12
  __m256i *v11; // r14
  void (__fastcall *v12)(__m256i *, _QWORD); // rbx
  __int64 v13; // rbp
  __int128 v14; // [rsp+0h] [rbp-4F8h] BYREF
  __int128 *v15; // [rsp+10h] [rbp-4E8h]
  __int64 (__fastcall *v16)(); // [rsp+18h] [rbp-4E0h]
  __int64 v17; // [rsp+20h] [rbp-4D8h]
  __int128 v18; // [rsp+30h] [rbp-4C8h] BYREF
  __int128 *v19; // [rsp+40h] [rbp-4B8h]
  __int128 v20; // [rsp+50h] [rbp-4A8h] BYREF
  __int128 *v21; // [rsp+60h] [rbp-498h]
  __int128 v22; // [rsp+70h] [rbp-488h] BYREF
  __int128 *v23; // [rsp+80h] [rbp-478h]
  __int64 (__fastcall *v24)(); // [rsp+88h] [rbp-470h]
  __int64 v25; // [rsp+98h] [rbp-460h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-458h]
  __int128 v27; // [rsp+B0h] [rbp-448h] BYREF
  __int128 *v28; // [rsp+C0h] [rbp-438h]
  char v29[8]; // [rsp+C8h] [rbp-430h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-428h]
  __int64 v31; // [rsp+D8h] [rbp-420h]
  __m256i v32; // [rsp+E0h] [rbp-418h] BYREF
  __int128 v33; // [rsp+100h] [rbp-3F8h]
  __int128 v34; // [rsp+110h] [rbp-3E8h]
  __int128 v35; // [rsp+120h] [rbp-3D8h]
  __int128 v36; // [rsp+130h] [rbp-3C8h]
  __int128 v37; // [rsp+140h] [rbp-3B8h]
  __int128 v38; // [rsp+150h] [rbp-3A8h]
  __m256i v39; // [rsp+168h] [rbp-390h] BYREF
  __int128 v40; // [rsp+188h] [rbp-370h]
  __int64 v41; // [rsp+198h] [rbp-360h]
  _BYTE v42[32]; // [rsp+1A0h] [rbp-358h] BYREF
  __m256i dest; // [rsp+1C0h] [rbp-338h] BYREF
  __int128 v44; // [rsp+1E0h] [rbp-318h]
  __int128 v45; // [rsp+1F0h] [rbp-308h]
  __int128 v46; // [rsp+200h] [rbp-2F8h]
  __int128 v47; // [rsp+210h] [rbp-2E8h]
  __int128 v48; // [rsp+220h] [rbp-2D8h]
  __int128 v49; // [rsp+230h] [rbp-2C8h]
  _QWORD v50[14]; // [rsp+488h] [rbp-70h] BYREF

  uu_groups::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v32, &dest, a1, a2);
  if ( __OFSUB__(-v32.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v32.m256i_i64[1],
             &dest,
             v2,
             -v32.m256i_i64[0]);
  v41 = v34;
  v40 = v33;
  v39 = v32;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v39);
  clap_builder::parser::error::MatchesError::unwrap(v50, &dest);
  if ( !v50[0]
    || (core::iter::traits::iterator::Iterator::collect(&dest, v50),
        *(_OWORD *)v32.m256i_i8 = *(_OWORD *)&dest.m256i_u64[1],
        dest.m256i_i64[0] == 0x8000000000000000LL) )
  {
    v25 = 0LL;
    v26 = 8uLL;
LABEL_6:
    uucore::features::entries::get_groups_gnu(&dest, 0LL);
    v4 = *(_OWORD *)dest.m256i_i8;
    if ( dest.m256i_i64[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<u32>,std::io::error::Error>>(
        0x8000000000000000LL,
        dest.m256i_i64[1]);
      dest.m256i_i64[0] = 0x8000000000000000LL;
      v5 = alloc::boxed::Box<T>::new(&dest);
    }
    else
    {
      core::iter::traits::iterator::Iterator::collect(
        &v14,
        dest.m256i_i64[1],
        dest.m256i_i64[1] + 4 * dest.m256i_i64[2]);
      alloc::str::join_generic_copy(&dest, *((_QWORD *)&v14 + 1), v15);
      v32.m256i_i64[2] = dest.m256i_i64[2];
      *(_OWORD *)v32.m256i_i8 = *(_OWORD *)dest.m256i_i8;
      *(_QWORD *)&v22 = &v32;
      *((_QWORD *)&v22 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      dest.m256i_i64[0] = (__int64)&unk_E1718;
      dest.m256i_i64[1] = 2LL;
      *(_QWORD *)&v44 = 0LL;
      dest.m256i_i64[2] = (__int64)&v22;
      dest.m256i_i64[3] = 1LL;
      std::io::stdio::_print(&dest);
      core::ptr::drop_in_place<alloc::string::String>(v32.m256i_i64[0], v32.m256i_i64[1]);
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v14);
      core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v4, *((_QWORD *)&v4 + 1));
      v5 = 0LL;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v25);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v39);
    return v5;
  }
  v26 = *(_OWORD *)v32.m256i_i8;
  v25 = dest.m256i_i64[0];
  if ( !v32.m256i_i64[1] )
    goto LABEL_6;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v42, &v25);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v27, v42);
  if ( (_QWORD)v27 != 0x8000000000000000LL )
  {
    v6 = &v32;
    v7 = (void (__fastcall *)(__m256i *, _QWORD))<uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate;
    v8 = &v27;
    do
    {
      v19 = v28;
      v18 = v27;
      v7(v6, *((_QWORD *)&v27 + 1));
      if ( v32.m256i_i64[0] == 0x8000000000000000LL )
      {
        v23 = v19;
        v22 = v18;
        uucore::mods::error::set_exit_code(1LL);
        *(_QWORD *)&v9 = uucore::util_name();
        v20 = v9;
        *(_QWORD *)&v14 = &v20;
        *((_QWORD *)&v14 + 1) = <&T as core::fmt::Display>::fmt;
        v15 = &v22;
        v16 = <uu_groups::GroupsError as core::fmt::Display>::fmt;
        dest.m256i_i64[0] = (__int64)&unk_E17A0;
        dest.m256i_i64[1] = 3LL;
        *(_QWORD *)&v44 = 0LL;
        dest.m256i_i64[2] = (__int64)&v14;
        dest.m256i_i64[3] = 2LL;
        std::io::stdio::_eprint(&dest);
        core::ptr::drop_in_place<uu_groups::GroupsError>(&v22);
        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(v6);
      }
      else
      {
        v10 = v8;
        v11 = v6;
        v12 = v7;
        v49 = v38;
        v48 = v37;
        v47 = v36;
        v46 = v35;
        v45 = v34;
        v44 = v33;
        dest = v32;
        uucore::features::entries::Passwd::belongs_to(&v14, &dest);
        v13 = *((_QWORD *)&v14 + 1);
        core::iter::traits::iterator::Iterator::collect(
          v29,
          *((_QWORD *)&v14 + 1),
          *((_QWORD *)&v14 + 1) + 4LL * (_QWORD)v15);
        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v14, v13);
        alloc::str::join_generic_copy(&v14, v30, v31);
        v21 = v15;
        v20 = v14;
        *(_QWORD *)&v22 = &v18;
        *((_QWORD *)&v22 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v23 = &v20;
        v24 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v14 = &unk_E1770;
        *((_QWORD *)&v14 + 1) = 3LL;
        v17 = 0LL;
        v15 = &v22;
        v16 = (__int64 (__fastcall *)())(&dword_0 + 2);
        std::io::stdio::_print(&v14);
        v7 = v12;
        core::ptr::drop_in_place<alloc::string::String>(v20, *((_QWORD *)&v20 + 1));
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v29);
        core::ptr::drop_in_place<uucore::features::entries::Passwd>(&dest);
        core::ptr::drop_in_place<alloc::string::String>(v18, *((_QWORD *)&v18 + 1));
        v6 = v11;
        v8 = v10;
      }
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v8, v42);
    }
    while ( (_QWORD)v27 != 0x8000000000000000LL );
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v42);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v39);
  return 0LL;
}