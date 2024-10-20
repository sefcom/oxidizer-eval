__int64 __fastcall uu_od::uumain::uumain(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  __int64 v21; // [rsp+0h] [rbp-7C8h]
  struct _Unwind_Exception *v22; // [rsp+0h] [rbp-7C8h]
  struct _Unwind_Exception *v23; // [rsp+0h] [rbp-7C8h]
  int v24; // [rsp+8h] [rbp-7C0h]
  int v25; // [rsp+8h] [rbp-7C0h]
  struct _Unwind_Exception *v26; // [rsp+10h] [rbp-7B8h]
  int v27; // [rsp+18h] [rbp-7B0h]
  int v28[2]; // [rsp+18h] [rbp-7B0h]
  __int64 v29; // [rsp+70h] [rbp-758h]
  int v30; // [rsp+78h] [rbp-750h]
  int v31[6]; // [rsp+80h] [rbp-748h] BYREF
  int v32[178]; // [rsp+98h] [rbp-730h] BYREF
  _OWORD v33[6]; // [rsp+360h] [rbp-468h] BYREF
  __int64 v34; // [rsp+3C0h] [rbp-408h]
  __int128 v35; // [rsp+3D0h] [rbp-3F8h] BYREF
  __int128 v36; // [rsp+3E0h] [rbp-3E8h]
  __int128 v37; // [rsp+3F0h] [rbp-3D8h]
  __int128 v38; // [rsp+400h] [rbp-3C8h]
  __int128 v39; // [rsp+410h] [rbp-3B8h]
  __int128 v40; // [rsp+420h] [rbp-3A8h]
  __int64 v41; // [rsp+430h] [rbp-398h]
  int v42[26]; // [rsp+438h] [rbp-390h] BYREF
  __int128 v43; // [rsp+4A0h] [rbp-328h]
  __int128 v44; // [rsp+4B0h] [rbp-318h]
  __int128 v45; // [rsp+4C0h] [rbp-308h]
  __int128 v46; // [rsp+4D0h] [rbp-2F8h]
  __int128 v47; // [rsp+4E0h] [rbp-2E8h]
  __int128 v48; // [rsp+4F0h] [rbp-2D8h]
  __int64 v49; // [rsp+500h] [rbp-2C8h]
  int v50[4]; // [rsp+510h] [rbp-2B8h] BYREF
  __int128 v51; // [rsp+520h] [rbp-2A8h]
  __int128 v52; // [rsp+530h] [rbp-298h] BYREF
  _OWORD v53[2]; // [rsp+540h] [rbp-288h] BYREF
  int v54[4]; // [rsp+560h] [rbp-268h]
  __int64 v55; // [rsp+570h] [rbp-258h]
  __int128 v56; // [rsp+580h] [rbp-248h] BYREF
  __int128 v57; // [rsp+590h] [rbp-238h]
  __int128 v58; // [rsp+5A0h] [rbp-228h]
  __int128 v59; // [rsp+5B0h] [rbp-218h]
  __int128 v60; // [rsp+5C0h] [rbp-208h]
  __int128 v61; // [rsp+5D0h] [rbp-1F8h]
  __int64 v62; // [rsp+5E0h] [rbp-1E8h]
  _BYTE v63[104]; // [rsp+5E8h] [rbp-1E0h] BYREF
  __int128 v64; // [rsp+650h] [rbp-178h]
  __int128 v65; // [rsp+660h] [rbp-168h]
  __int128 v66; // [rsp+670h] [rbp-158h]
  __int128 v67; // [rsp+680h] [rbp-148h]
  __int128 v68; // [rsp+690h] [rbp-138h]
  __int128 v69; // [rsp+6A0h] [rbp-128h]
  __int64 v70; // [rsp+6B0h] [rbp-118h]
  int v71[8]; // [rsp+6C0h] [rbp-108h] BYREF
  int v72[24]; // [rsp+6E0h] [rbp-E8h] BYREF
  int v73[16]; // [rsp+740h] [rbp-88h] BYREF
  int v74[18]; // [rsp+780h] [rbp-48h] BYREF

  uucore::Args::collect_ignore(v31, a1, a2);
  uu_od::uu_app(v32);
  clap_builder::builder::command::Command::try_get_matches_from(
    (int)v42,
    (int)v32,
    (int)v31,
    v2,
    v3,
    v4,
    v21,
    v24,
    v26,
    v27);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v35, v42);
  if ( (_QWORD)v35 == 0x8000000000000000LL )
  {
    v29 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v35 + 1),
            &off_129910);
LABEL_8:
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v31);
    return v29;
  }
  v49 = v41;
  v48 = v40;
  v47 = v39;
  v46 = v38;
  v45 = v37;
  v44 = v36;
  v43 = v35;
  v34 = v41;
  v33[5] = v40;
  v33[4] = v39;
  v33[3] = v38;
  v33[2] = v37;
  v33[1] = v36;
  v33[0] = v35;
  v5 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v31);
  uu_od::OdOptions::new(v63, v33, v5, v6);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v56, v63);
  if ( (_QWORD)v56 == 2LL )
  {
    v29 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v56 + 1),
            v57,
            &off_1298F8);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
    goto LABEL_8;
  }
  v70 = v62;
  v69 = v61;
  v68 = v60;
  v67 = v59;
  v66 = v58;
  v65 = v57;
  v64 = v56;
  v55 = v62;
  *(_OWORD *)v54 = v61;
  v53[1] = v60;
  v53[0] = v59;
  v52 = v58;
  v51 = v57;
  *(_OWORD *)v50 = v56;
  uu_od::inputoffset::InputOffset::new(v71, BYTE2(v62), v61, v57, *((_QWORD *)&v57 + 1));
  v7 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v52);
  uu_od::open_input_peek_reader(v72, v7, v8, *(_QWORD *)v54, *(_QWORD *)v50, *(_QWORD *)&v50[2]);
  uu_od::inputdecoder::InputDecoder<I>::new((__int64)v73, (__int64)v72, *(__int64 *)&v54[2], 4LL, SBYTE1(v55));
  *(_QWORD *)v28 = *(_QWORD *)&v54[2];
  v9 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index((char *)v53 + 8, &off_1298E0);
  uu_od::output_info::OutputInfo::new(v74, *(_QWORD *)v28, v9, v10, v55 & 1);
  v29 = uu_od::odfunc((__int64)v71, (__int64)v73, (__int64)v74);
  v30 = v11;
  core::ptr::drop_in_place<uu_od::output_info::OutputInfo>(v74);
  core::ptr::drop_in_place<uu_od::inputdecoder::InputDecoder<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>>(v73);
  core::ptr::drop_in_place<uu_od::peekreader::PeekReader<uu_od::partialreader::PartialReader<uu_od::multifilereader::MultifileReader>>>(
    (int)v72,
    (int)v73,
    v12,
    v13,
    v14,
    v15,
    v22,
    v30);
  core::ptr::drop_in_place<uu_od::OdOptions>((int)v50, (int)v73, v16, v17, v18, v19, v23, v25);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v33);
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v31);
  return v29;
}
