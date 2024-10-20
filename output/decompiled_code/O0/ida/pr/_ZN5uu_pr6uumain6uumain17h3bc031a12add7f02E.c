__int64 __fastcall uu_pr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _OWORD *v18; // rsi
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // ecx
  int v29; // [rsp+0h] [rbp-BF8h]
  struct _Unwind_Exception *v30; // [rsp+0h] [rbp-BF8h]
  int v31; // [rsp+8h] [rbp-BF0h]
  int v32; // [rsp+8h] [rbp-BF0h]
  int v33; // [rsp+10h] [rbp-BE8h]
  int v34; // [rsp+18h] [rbp-BE0h]
  int v35; // [rsp+20h] [rbp-BD8h]
  int v36; // [rsp+28h] [rbp-BD0h]
  int v37; // [rsp+30h] [rbp-BC8h]
  int v38; // [rsp+60h] [rbp-B98h]
  int v39; // [rsp+68h] [rbp-B90h]
  int v40; // [rsp+70h] [rbp-B88h]
  int v41; // [rsp+78h] [rbp-B80h]
  int v42[2]; // [rsp+80h] [rbp-B78h]
  int v43[2]; // [rsp+88h] [rbp-B70h]
  int v44; // [rsp+90h] [rbp-B68h]
  int v45; // [rsp+98h] [rbp-B60h]
  int v46; // [rsp+A0h] [rbp-B58h]
  int v47; // [rsp+A8h] [rbp-B50h]
  __int64 v48; // [rsp+B0h] [rbp-B48h]
  int v49; // [rsp+B8h] [rbp-B40h]
  char is_empty; // [rsp+BFh] [rbp-B39h]
  int v51; // [rsp+C0h] [rbp-B38h]
  int v52; // [rsp+C8h] [rbp-B30h]
  int *v53; // [rsp+D0h] [rbp-B28h]
  int v54; // [rsp+D8h] [rbp-B20h]
  int v55; // [rsp+E0h] [rbp-B18h]
  int v56; // [rsp+E8h] [rbp-B10h]
  __int64 v57; // [rsp+E8h] [rbp-B10h]
  struct _Unwind_Exception *v58; // [rsp+F0h] [rbp-B08h]
  int v59[6]; // [rsp+F8h] [rbp-B00h] BYREF
  __int128 v60; // [rsp+110h] [rbp-AE8h] BYREF
  __int64 v61; // [rsp+120h] [rbp-AD8h]
  int v62[178]; // [rsp+128h] [rbp-AD0h] BYREF
  _OWORD v63[6]; // [rsp+3F0h] [rbp-808h] BYREF
  __int64 v64; // [rsp+450h] [rbp-7A8h]
  __int128 v65; // [rsp+460h] [rbp-798h] BYREF
  __int128 v66; // [rsp+470h] [rbp-788h]
  __int128 v67; // [rsp+480h] [rbp-778h]
  __int128 v68; // [rsp+490h] [rbp-768h]
  __int128 v69; // [rsp+4A0h] [rbp-758h]
  __int128 v70; // [rsp+4B0h] [rbp-748h]
  __int64 v71; // [rsp+4C0h] [rbp-738h]
  int v72[26]; // [rsp+4C8h] [rbp-730h] BYREF
  int v73[4]; // [rsp+530h] [rbp-6C8h] BYREF
  __int64 v74; // [rsp+540h] [rbp-6B8h]
  __int128 v75; // [rsp+550h] [rbp-6A8h]
  __int128 v76; // [rsp+560h] [rbp-698h]
  __int128 v77; // [rsp+570h] [rbp-688h]
  __int128 v78; // [rsp+580h] [rbp-678h]
  __int128 v79; // [rsp+590h] [rbp-668h]
  __int128 v80; // [rsp+5A0h] [rbp-658h]
  __int64 v81; // [rsp+5B0h] [rbp-648h]
  __int128 v82; // [rsp+5B8h] [rbp-640h] BYREF
  __int64 v83; // [rsp+5C8h] [rbp-630h]
  _BYTE v84[24]; // [rsp+5D0h] [rbp-628h] BYREF
  _BYTE v85[24]; // [rsp+5E8h] [rbp-610h] BYREF
  _BYTE v86[64]; // [rsp+600h] [rbp-5F8h] BYREF
  __int128 v87; // [rsp+640h] [rbp-5B8h] BYREF
  __int64 v88; // [rsp+650h] [rbp-5A8h]
  __int128 v89; // [rsp+658h] [rbp-5A0h]
  __int64 v90; // [rsp+668h] [rbp-590h]
  _BYTE v91[32]; // [rsp+670h] [rbp-588h] BYREF
  _BYTE v92[32]; // [rsp+690h] [rbp-568h] BYREF
  __int128 v93; // [rsp+6B0h] [rbp-548h] BYREF
  __int64 v94; // [rsp+6C0h] [rbp-538h]
  _QWORD v95[4]; // [rsp+6D0h] [rbp-528h] BYREF
  __int128 v96; // [rsp+6F0h] [rbp-508h] BYREF
  __int64 v97; // [rsp+700h] [rbp-4F8h]
  _QWORD v98[4]; // [rsp+708h] [rbp-4F0h] BYREF
  __int128 v99; // [rsp+728h] [rbp-4D0h] BYREF
  __int64 v100; // [rsp+738h] [rbp-4C0h]
  __int128 v101; // [rsp+740h] [rbp-4B8h] BYREF
  __int64 v102; // [rsp+750h] [rbp-4A8h]
  _QWORD src[41]; // [rsp+760h] [rbp-498h] BYREF
  _BYTE v104[24]; // [rsp+8A8h] [rbp-350h] BYREF
  int v105[82]; // [rsp+8C0h] [rbp-338h] BYREF
  _BYTE dest[328]; // [rsp+A08h] [rbp-1F0h] BYREF
  _OWORD v107[2]; // [rsp+B50h] [rbp-A8h] BYREF
  _OWORD v108[2]; // [rsp+B70h] [rbp-88h] BYREF
  int v109[2]; // [rsp+B90h] [rbp-68h] BYREF
  _QWORD *v110; // [rsp+B98h] [rbp-60h]
  unsigned int v111; // [rsp+BBCh] [rbp-3Ch]
  _OWORD v112[2]; // [rsp+BC0h] [rbp-38h] BYREF
  char v113; // [rsp+BE3h] [rbp-15h]
  char v114; // [rsp+BE4h] [rbp-14h]
  char v115; // [rsp+BE5h] [rbp-13h]
  char v116; // [rsp+BE6h] [rbp-12h]
  char v117; // [rsp+BE7h] [rbp-11h]

  v117 = 0;
  v116 = 0;
  v115 = 0;
  v114 = 0;
  v113 = 0;
  v53 = v59;
  uucore::Args::collect_ignore(v59, a1, a2);
  v2 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v59);
  v54 = v3;
  v55 = v2;
  uu_pr::recreate_arguments(&v60, v2, v3);
  v117 = 1;
  uu_pr::uu_app(v62);
  v117 = 0;
  v74 = v61;
  *(_OWORD *)v73 = v60;
  clap_builder::builder::command::Command::try_get_matches_from_mut(v72, v62, v73);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v65, v72);
  if ( (_QWORD)v65 == 0x8000000000000000LL )
  {
    v57 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            *((_QWORD *)&v65 + 1),
            &off_2C5058);
  }
  else
  {
    v81 = v71;
    v80 = v70;
    v79 = v69;
    v78 = v68;
    v77 = v67;
    v76 = v66;
    v75 = v65;
    v64 = v71;
    v63[5] = v70;
    v63[4] = v69;
    v63[3] = v68;
    v63[2] = v67;
    v63[1] = v66;
    v63[0] = v65;
    clap_builder::parser::matches::arg_matches::ArgMatches::get_many(v86, v63, aFiles, 5LL, &off_2C4FE0);
    core::option::Option<T>::map(v85, v86);
    core::option::Option<T>::unwrap_or_default(v84, v85);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v82, v84);
    v116 = 1;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v84);
    is_empty = alloc::vec::Vec<T,A>::is_empty(&v82);
    if ( (is_empty & 1) != 0 )
      alloc::vec::Vec<T,A>::insert(&v82, 0LL, asc_54B72, 1LL);
    if ( (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v63, aMerge, 5LL, &off_2C4FF8) & 1) != 0 )
    {
      v48 = alloc::alloc::exchange_malloc(24LL, 8LL);
      v116 = 0;
      v89 = v82;
      v90 = v83;
      if ( (v48 & 7) != 0 )
        core::panicking::panic_misaligned_pointer_dereference(8LL, v48, &off_2C5010);
      *(_QWORD *)(v48 + 16) = v90;
      *(_OWORD *)v48 = v89;
      alloc::slice::<impl [T]>::into_vec(&v87, v48, 1LL);
    }
    else
    {
      v116 = 0;
      v94 = v83;
      v93 = v82;
      <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v92, &v93);
      core::iter::traits::iterator::Iterator::map(v91, v92);
      core::iter::traits::iterator::Iterator::collect(&v87, v91);
    }
    v97 = v88;
    v96 = v87;
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v95, &v96);
    v98[0] = v95[0];
    v98[1] = v95[1];
    v98[2] = v95[2];
    v98[3] = v95[3];
    while ( 1 )
    {
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v99, v98);
      if ( (_QWORD)v99 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v98);
        v57 = 0LL;
        v116 = 0;
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v63);
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(v62);
        v117 = 0;
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v59);
        return v57;
      }
      v102 = v100;
      v101 = v99;
      v4 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v101);
      v46 = v5;
      v47 = v4;
      *(_QWORD *)v42 = v4;
      *(_QWORD *)v43 = v5;
      v7 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(v59);
      v44 = v8;
      v45 = v7;
      alloc::slice::<impl [T]>::join(v104, v7, v8, asc_54B78, 1LL);
      v9 = <alloc::string::String as core::ops::deref::Deref>::deref(v104);
      v40 = v10;
      v41 = v9;
      uu_pr::build_options(src, v63, *(_QWORD *)v42, *(_QWORD *)v43, v9, v10);
      v114 = 1;
      v115 = 1;
      core::ptr::drop_in_place<alloc::string::String>(v104);
      if ( src[0] == 2LL )
      {
        v115 = 0;
        v107[1] = *(_OWORD *)&src[3];
        v107[0] = *(_OWORD *)&src[1];
        uu_pr::print_error(v63, v107);
        v57 = <T as core::convert::Into<U>>::into(1LL, &off_2C5040);
        core::ptr::drop_in_place<uu_pr::PrError>(v107);
        goto LABEL_37;
      }
      v114 = 0;
      memcpy(dest, src, sizeof(dest));
      memcpy(v105, dest, sizeof(v105));
      v11 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v101);
      v38 = v12;
      v39 = v11;
      v13 = core::slice::<impl [T]>::iter(v11, v12);
      itertools::Itertools::exactly_one(
        (int)v109,
        v13,
        v14,
        v15,
        v16,
        v17,
        v29,
        v31,
        v33,
        v34,
        v35,
        v36,
        v37,
        v14,
        v13,
        (int)dest,
        328,
        (int)&memcpy,
        v38,
        v39,
        v40,
        v41,
        v42[0],
        v43[0],
        v44,
        v45,
        v46,
        v47,
        v48,
        v49,
        v51,
        v52,
        (int)v53,
        v54,
        v55,
        v56,
        v58,
        v59[0]);
      if ( *(_QWORD *)v109 == 2LL )
      {
        v18 = (_OWORD *)*v110;
        uu_pr::pr(v108, *v110, v110[1], v105);
      }
      else
      {
        v21 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref(&v101);
        v36 = v22;
        v37 = v21;
        LODWORD(v18) = v21;
        uu_pr::mpr(v108, v21, v22, v105);
      }
      v113 = 1;
      if ( *(_QWORD *)&v108[0] != 0x8000000000000005LL )
      {
        v113 = 0;
        v112[1] = v108[1];
        v112[0] = v108[0];
        v18 = v112;
        uu_pr::print_error(v63, v112);
        v111 = 1;
        core::ptr::drop_in_place<uu_pr::PrError>(v112);
      }
      else
      {
        v111 = 0;
      }
      if ( v111 )
        break;
      v23 = 5;
      v24 = 0;
      if ( *(_QWORD *)&v108[0] != 0x8000000000000005LL && (v113 & 1) != 0 )
        core::ptr::drop_in_place<uu_pr::PrError>(v108);
      v113 = 0;
      core::ptr::drop_in_place<uu_pr::OutputOptions>((int)v105, (int)v18, v23, v24, v19, v20, v30, v32);
      v114 = 0;
      v115 = 0;
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v101);
    }
    v57 = <T as core::convert::Into<U>>::into(v111, &off_2C5028);
    v27 = 5;
    v28 = 0;
    if ( *(_QWORD *)&v108[0] != 0x8000000000000005LL && (v113 & 1) != 0 )
      core::ptr::drop_in_place<uu_pr::PrError>(v108);
    v113 = 0;
    core::ptr::drop_in_place<uu_pr::OutputOptions>((int)v105, (int)&off_2C5028, v27, v28, v25, v26, v30, v32);
LABEL_37:
    v114 = 0;
    v115 = 0;
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v101);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v98);
    v116 = 0;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v63);
  }
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v62);
  v117 = 0;
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v59);
  return v57;
}
