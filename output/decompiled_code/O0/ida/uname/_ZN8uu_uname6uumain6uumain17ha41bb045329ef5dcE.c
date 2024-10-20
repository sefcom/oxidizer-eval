__int64 __fastcall uu_uname::uumain::uumain(int a1, int a2)
{
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _Unwind_Exception *v7; // rdx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  struct _Unwind_Exception *v13; // [rsp+0h] [rbp-8B8h]
  struct _Unwind_Exception *v14; // [rsp+0h] [rbp-8B8h]
  int v15; // [rsp+8h] [rbp-8B0h]
  int v16; // [rsp+8h] [rbp-8B0h]
  struct _Unwind_Exception *v17; // [rsp+10h] [rbp-8A8h]
  int v18; // [rsp+18h] [rbp-8A0h]
  char v19; // [rsp+50h] [rbp-868h]
  char v20; // [rsp+51h] [rbp-867h]
  char v21; // [rsp+52h] [rbp-866h]
  char v22; // [rsp+53h] [rbp-865h]
  char v23; // [rsp+54h] [rbp-864h]
  char v24; // [rsp+55h] [rbp-863h]
  char v25; // [rsp+56h] [rbp-862h]
  char v26; // [rsp+57h] [rbp-861h]
  char flag; // [rsp+6Fh] [rbp-849h]
  __int64 v28; // [rsp+80h] [rbp-838h]
  _OWORD v29[6]; // [rsp+90h] [rbp-828h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-7C8h]
  __int128 v31; // [rsp+F8h] [rbp-7C0h] BYREF
  __int128 v32; // [rsp+108h] [rbp-7B0h]
  __int128 v33; // [rsp+118h] [rbp-7A0h]
  __int128 v34; // [rsp+128h] [rbp-790h]
  __int128 v35; // [rsp+138h] [rbp-780h]
  __int128 v36; // [rsp+148h] [rbp-770h]
  __int64 v37; // [rsp+158h] [rbp-760h]
  int v38[26]; // [rsp+160h] [rbp-758h] BYREF
  int v39[178]; // [rsp+1C8h] [rbp-6F0h] BYREF
  __int128 v40; // [rsp+490h] [rbp-428h]
  __int128 v41; // [rsp+4A0h] [rbp-418h]
  __int128 v42; // [rsp+4B0h] [rbp-408h]
  __int128 v43; // [rsp+4C0h] [rbp-3F8h]
  __int128 v44; // [rsp+4D0h] [rbp-3E8h]
  __int128 v45; // [rsp+4E0h] [rbp-3D8h]
  __int64 v46; // [rsp+4F0h] [rbp-3C8h]
  _BYTE v47[9]; // [rsp+507h] [rbp-3B1h] BYREF
  int v48[48]; // [rsp+510h] [rbp-3A8h] BYREF
  _QWORD src[24]; // [rsp+5D0h] [rbp-2E8h] BYREF
  _BYTE v50[192]; // [rsp+690h] [rbp-228h] BYREF
  _BYTE dest[192]; // [rsp+750h] [rbp-168h] BYREF
  _BYTE v52[48]; // [rsp+810h] [rbp-A8h] BYREF
  __int128 v53; // [rsp+840h] [rbp-78h] BYREF
  __int128 v54; // [rsp+858h] [rbp-60h]
  _QWORD v55[2]; // [rsp+868h] [rbp-50h] BYREF
  _BYTE v56[31]; // [rsp+878h] [rbp-40h] BYREF
  char v57; // [rsp+897h] [rbp-21h]
  _QWORD *v58; // [rsp+8A8h] [rbp-10h]
  __int64 (__fastcall *v59)(); // [rsp+8B0h] [rbp-8h]

  v57 = 1;
  uu_uname::uu_app(v39);
  v57 = 0;
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v38,
    (int)v39,
    a1,
    a2,
    v2,
    v3,
    (__int64)v13,
    v15,
    v17,
    v18);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v31, v38);
  if ( (_QWORD)v31 == 0x8000000000000000LL )
    return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
             *((_QWORD *)&v31 + 1),
             &off_FA468);
  v46 = v37;
  v45 = v36;
  v44 = v35;
  v43 = v34;
  v42 = v33;
  v41 = v32;
  v40 = v31;
  v30 = v37;
  v29[5] = v36;
  v29[4] = v35;
  v29[3] = v34;
  v29[2] = v33;
  v29[1] = v32;
  v29[0] = v31;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           v29,
           aAll,
           *(&uu_uname::options::ALL + 1),
           &off_FA378);
  v26 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aKernelName,
          *(&uu_uname::options::KERNEL_NAME + 1),
          &off_FA390);
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          &unk_171F8,
          *(&uu_uname::options::NODENAME + 1),
          &off_FA3A8);
  v24 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aKernelRelease,
          *(&uu_uname::options::KERNEL_RELEASE + 1),
          &off_FA3C0);
  v23 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aKernelVersion,
          *(&uu_uname::options::KERNEL_VERSION + 1),
          &off_FA3D8);
  v22 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aMachine,
          *(&uu_uname::options::MACHINE + 1),
          &off_FA3F0);
  v21 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aProcessor,
          *(&uu_uname::options::PROCESSOR + 1),
          &off_FA408);
  v20 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aHardwarePlatfo,
          *(&uu_uname::options::HARDWARE_PLATFORM + 1),
          &off_FA420);
  v19 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v29,
          aOperatingSyste,
          *(&uu_uname::options::OS + 1),
          &off_FA438);
  v47[0] = flag & 1;
  v47[1] = v26 & 1;
  v47[2] = v25 & 1;
  v47[3] = v23 & 1;
  v47[4] = v24 & 1;
  v47[5] = v22 & 1;
  v47[6] = v21 & 1;
  v47[7] = v20 & 1;
  v47[8] = v19 & 1;
  uu_uname::UNameOutput::new(v50, v47);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v50);
  if ( src[0] == 0x8000000000000001LL )
  {
    v28 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            src[1],
            src[2],
            &off_FA450);
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    memcpy(v48, dest, sizeof(v48));
    uu_uname::UNameOutput::display(v56, v48);
    v4 = <alloc::string::String as core::ops::deref::Deref>::deref(v56);
    v6 = core::str::<impl str>::trim_end(v4, v5);
    v14 = v7;
    v16 = v6;
    v55[0] = v6;
    v55[1] = v7;
    v58 = v55;
    v59 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v54 = v55;
    *((_QWORD *)&v54 + 1) = <&T as core::fmt::Display>::fmt;
    v53 = v54;
    core::fmt::Arguments::new_v1(v52, &unk_FA338, &v53);
    std::io::stdio::_print(v52);
    core::ptr::drop_in_place<alloc::string::String>(v56);
    v28 = 0LL;
    core::ptr::drop_in_place<uu_uname::UNameOutput>((int)v48, (int)&unk_FA338, v8, v9, v10, v11, v14, v16);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v29);
  return v28;
}
