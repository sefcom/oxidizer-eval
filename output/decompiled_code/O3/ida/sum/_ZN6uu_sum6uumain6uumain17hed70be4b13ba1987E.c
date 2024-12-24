__int64 __fastcall uu_sum::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r15
  __int128 v6; // xmm0
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int16 v14; // dx
  char v15; // [rsp+Eh] [rbp-43Ah]
  unsigned __int8 flag; // [rsp+Fh] [rbp-439h]
  __int128 v17; // [rsp+10h] [rbp-438h] BYREF
  __int128 v18; // [rsp+20h] [rbp-428h]
  __int128 v19; // [rsp+30h] [rbp-418h]
  __int128 v20; // [rsp+40h] [rbp-408h]
  __int64 v21; // [rsp+50h] [rbp-3F8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-3F0h]
  __int128 v23; // [rsp+60h] [rbp-3E8h] BYREF
  unsigned int (**v24)(void); // [rsp+70h] [rbp-3D8h]
  __int64 v25; // [rsp+78h] [rbp-3D0h]
  __int128 *v26; // [rsp+80h] [rbp-3C8h]
  __int64 v27; // [rsp+88h] [rbp-3C0h]
  char v28[8]; // [rsp+98h] [rbp-3B0h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-3A8h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-3A0h]
  _QWORD v31[2]; // [rsp+B0h] [rbp-398h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-388h] BYREF
  _QWORD v33[2]; // [rsp+C8h] [rbp-380h] BYREF
  _OWORD v34[3]; // [rsp+D8h] [rbp-370h] BYREF
  __int64 v35; // [rsp+108h] [rbp-340h]
  _OWORD v36[4]; // [rsp+110h] [rbp-338h] BYREF
  __int128 v37; // [rsp+150h] [rbp-2F8h] BYREF
  unsigned int (**v38)(void); // [rsp+160h] [rbp-2E8h]
  __int64 v39; // [rsp+168h] [rbp-2E0h]
  __int64 v40; // [rsp+170h] [rbp-2D8h]
  __int64 v41; // [rsp+178h] [rbp-2D0h]
  char v42; // [rsp+180h] [rbp-2C8h]
  __int64 v43; // [rsp+188h] [rbp-2C0h]
  __int64 v44; // [rsp+198h] [rbp-2B0h]
  __int64 v45; // [rsp+1A0h] [rbp-2A8h]
  __int64 v46; // [rsp+1A8h] [rbp-2A0h]
  __int64 v47; // [rsp+1B0h] [rbp-298h]
  char v48; // [rsp+1B8h] [rbp-290h]
  __int64 v49; // [rsp+1C0h] [rbp-288h]
  __int64 v50; // [rsp+1D0h] [rbp-278h]
  __int64 v51; // [rsp+1E0h] [rbp-268h]
  __int64 v52; // [rsp+1E8h] [rbp-260h]
  char v53; // [rsp+1F0h] [rbp-258h]

  uu_sum::uu_app(&v37);
  clap_builder::builder::command::Command::try_get_matches_from(&v17, &v37, a1, a2);
  if ( (_QWORD)v17 == 0x8000000000000000LL )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v17 + 1));
  v35 = v20;
  v34[2] = v19;
  v34[1] = v18;
  v34[0] = v17;
  v3 = (__int64)*(&uu_sum::options::FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
    &v37,
    v34,
    anon_3342293b089078610c68acf0c953cc3b_0_llvm_1681126381320418859,
    v3);
  clap_builder::parser::error::MatchesError::unwrap(
    &v17,
    anon_3342293b089078610c68acf0c953cc3b_0_llvm_1681126381320418859,
    v3,
    &v37);
  if ( (_QWORD)v17 )
  {
    v36[3] = v20;
    v36[2] = v19;
    v36[1] = v18;
    v36[0] = v17;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v28, v36);
  }
  else
  {
    v4 = alloc::alloc::Global::alloc_impl();
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v5 = v4;
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v37);
    v24 = v38;
    v6 = v37;
    v23 = v37;
    *(_QWORD *)(v5 + 16) = v38;
    *(_OWORD *)v5 = v6;
    alloc::slice::hack::into_vec(v28, v5, 1LL);
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v34,
           anon_3342293b089078610c68acf0c953cc3b_2_llvm_1681126381320418859,
           *(&uu_sum::options::SYSTEM_V_COMPATIBLE + 1));
  v7 = v30;
  v15 = 1;
  if ( v30 <= 1 )
  {
    if ( v30 != 1 )
      core::panicking::panic_bounds_check(0LL, 0LL, &off_110DF0);
    v15 = <alloc::string::String as core::cmp::PartialEq<&str>>::ne(*(_QWORD *)(v29 + 8), *(_QWORD *)(v29 + 16));
    v7 = v30;
  }
  v31[0] = v29;
  v31[1] = v29 + 24 * v7;
  v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
  if ( v8 )
  {
    v9 = 4LL * (flag ^ 1u) + 1;
    do
    {
      v32 = v8;
      uu_sum::open(&v23, *(_QWORD *)(v8 + 8), *(_QWORD *)(v8 + 16));
      v10 = (__int64)v24;
      if ( (_QWORD)v23 )
      {
        v21 = *((_QWORD *)&v23 + 1);
        v22 = (__int64)v24;
        v11 = v24[12]();
        uucore::mods::error::set_exit_code(v11, v10);
        v33[0] = uucore::util_name();
        v33[1] = v12;
        *(_QWORD *)&v17 = v33;
        *((_QWORD *)&v17 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v18 = &v21;
        *((_QWORD *)&v18 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
        *(_QWORD *)&v37 = &unk_110E78;
        *((_QWORD *)&v37 + 1) = 3LL;
        v40 = 0LL;
        v38 = (unsigned int (**)(void))&v17;
        v39 = 2LL;
        std::io::stdio::_eprint(&v37);
        core::ptr::drop_in_place<alloc::boxed::Box<dyn uucore::mods::error::UError>>(v21, v22);
      }
      else
      {
        if ( flag )
          v13 = uu_sum::sysv_sum(*((__int64 *)&v23 + 1), (__int64)v24);
        else
          v13 = uu_sum::bsd_sum(*((__int64 *)&v23 + 1), (__int64)v24);
        v33[0] = v13;
        LOWORD(v21) = v14;
        *(_QWORD *)&v17 = &v21;
        *((_QWORD *)&v17 + 1) = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        *(_QWORD *)&v18 = v33;
        *((_QWORD *)&v18 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        if ( v15 )
        {
          *(_QWORD *)&v19 = &v32;
          *((_QWORD *)&v19 + 1) = <&T as core::fmt::Display>::fmt;
          v20 = (unsigned __int64)v9;
          *(_QWORD *)&v37 = 2LL;
          v38 = (unsigned int (**)(void))(&dword_0 + 1);
          v39 = 3LL;
          v40 = 0LL;
          v41 = 0x800000020LL;
          v42 = 3;
          v43 = 2LL;
          v44 = 1LL;
          v45 = 3LL;
          v46 = 1LL;
          v47 = 32LL;
          v48 = 3;
          v49 = 2LL;
          v50 = 2LL;
          v51 = 2LL;
          v52 = 32LL;
          v53 = 3;
          *(_QWORD *)&v23 = &unk_110E38;
          *((_QWORD *)&v23 + 1) = 4LL;
          v26 = &v37;
          v27 = 3LL;
          v24 = (unsigned int (**)(void))&v17;
          v25 = 4LL;
        }
        else
        {
          v19 = (unsigned __int64)v9;
          *(_QWORD *)&v37 = 2LL;
          v38 = (unsigned int (**)(void))(&dword_0 + 1);
          v39 = 2LL;
          v40 = 0LL;
          v41 = 0x800000020LL;
          v42 = 3;
          v43 = 2LL;
          v44 = 1LL;
          v45 = 2LL;
          v46 = 1LL;
          v47 = 32LL;
          v48 = 3;
          *(_QWORD *)&v23 = &unk_110E08;
          *((_QWORD *)&v23 + 1) = 3LL;
          v26 = &v37;
          v27 = 2LL;
          v24 = (unsigned int (**)(void))&v17;
          v25 = 3LL;
        }
        std::io::stdio::_print(&v23);
      }
      v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v31);
    }
    while ( v8 );
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v28);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v34);
  return 0LL;
}
