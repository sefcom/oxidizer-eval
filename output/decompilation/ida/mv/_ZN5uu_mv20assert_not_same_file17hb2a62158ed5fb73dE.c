__int64 __fastcall uu_mv::assert_not_same_file(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // r12
  int v15; // r15d
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rbx
  char v20; // bp
  __int64 v21; // rdi
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  bool v45; // bp
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char v52; // bp
  __int64 v53; // rbx
  __int64 v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // rbx
  __int64 v59; // [rsp+8h] [rbp-1E0h]
  __int64 v61; // [rsp+18h] [rbp-1D0h]
  __int64 v63; // [rsp+28h] [rbp-1C0h]
  __int64 v64; // [rsp+28h] [rbp-1C0h]
  char v65; // [rsp+34h] [rbp-1B4h]
  __int64 v66; // [rsp+38h] [rbp-1B0h]
  _BYTE v67[24]; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v68; // [rsp+58h] [rbp-190h] BYREF
  __int64 v69; // [rsp+68h] [rbp-180h]
  __int64 v70; // [rsp+70h] [rbp-178h] BYREF
  __int64 v71; // [rsp+78h] [rbp-170h]
  __int64 v72; // [rsp+80h] [rbp-168h]
  char v73; // [rsp+88h] [rbp-160h]
  __int128 v74; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-128h]
  _BYTE dest[24]; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-108h]
  __int128 v78; // [rsp+E8h] [rbp-100h]
  __int64 v79; // [rsp+F8h] [rbp-F0h]
  _QWORD v80[2]; // [rsp+178h] [rbp-70h] BYREF
  __int128 v81; // [rsp+188h] [rbp-60h] BYREF
  __int64 v82; // [rsp+198h] [rbp-50h]
  __int128 v83; // [rsp+1A0h] [rbp-48h] BYREF
  __int64 v84; // [rsp+1B0h] [rbp-38h]

  v10 = a1;
  std::path::absolute(dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)dest, 1LL) )
    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&dest[8]);
  v61 = a4;
  v81 = *(_OWORD *)dest;
  v82 = *(_QWORD *)&dest[16];
  uucore::features::fs::canonicalize(&v70, &v81);
  v12 = v70;
  if ( v70 == 0x8000000000000000LL )
    goto LABEL_5;
  v13 = v71;
  v14 = v71;
  v66 = v72;
  std::fs::metadata(dest);
  v15 = *(_DWORD *)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v13);
  v16 = v15 == 2;
  v10 = a1;
  if ( v16 )
  {
LABEL_5:
    std::path::absolute(dest, v10, a2);
    v18 = *(_QWORD *)&dest[8];
    v17 = *(_QWORD *)dest;
    if ( *(_QWORD *)dest == 0x8000000000000000LL )
    {
      v19 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&dest[8]);
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v70);
      return v19;
    }
    v66 = *(_QWORD *)&dest[16];
    if ( v12 == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v70);
      if ( a5 )
        goto LABEL_9;
LABEL_13:
      v20 = 0;
LABEL_14:
      std::path::absolute(dest, a3, v61);
      v65 = v20;
      v21 = *(_QWORD *)&dest[8];
      v22 = *(_QWORD *)dest;
      if ( *(_QWORD *)dest == 0x8000000000000000LL )
      {
LABEL_11:
        result = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
LABEL_50:
        v54 = result;
        core::ptr::drop_in_place<std::path::PathBuf>(v17, v18);
        return v54;
      }
      v63 = *(_QWORD *)&dest[8];
      v23 = std::path::Path::parent(*(_QWORD *)&dest[8], *(_QWORD *)&dest[16]);
      v25 = v23;
      if ( v23
        && ((v26 = v24, core::str::converts::from_utf8(dest, v23), (dest[0] & 1) != 0)
         || !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                *(_QWORD *)&dest[8],
                                *(_QWORD *)&dest[16],
                                1LL,
                                0LL)) )
      {
        uucore::features::fs::canonicalize(dest, v25, v26);
        v27 = *(_QWORD *)&dest[8];
        v28 = *(_QWORD *)dest;
        if ( *(_QWORD *)dest != 0x8000000000000000LL )
        {
          v40 = *(_QWORD *)&dest[16];
          v41 = std::path::Path::file_name(a3, v61);
          v43 = v42;
          v44 = 1LL;
          if ( v41 )
            v44 = v41;
          else
            v43 = 0LL;
          std::path::Path::join(&v68, v27, v40, v44, v43);
          core::ptr::drop_in_place<std::path::PathBuf>(v28, v27);
          goto LABEL_35;
        }
      }
      else
      {
        std::path::absolute(dest, a3, v61);
        v27 = *(_QWORD *)&dest[8];
        if ( *(_QWORD *)dest != 0x8000000000000000LL )
        {
          v68 = *(_OWORD *)dest;
          v69 = *(_QWORD *)&dest[16];
LABEL_35:
          v33 = a2;
          v38 = v22;
          v39 = v63;
          goto LABEL_36;
        }
      }
      v29 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
      core::ptr::drop_in_place<std::path::PathBuf>(v22, v63);
      result = v29;
      goto LABEL_50;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v12, v71);
    if ( !a5 )
      goto LABEL_13;
  }
  else
  {
    v18 = v14;
    v17 = v12;
    if ( !a5 )
      goto LABEL_13;
  }
LABEL_9:
  v20 = a6 ^ 1;
  if ( (a6 & 1) != 0 )
    goto LABEL_14;
  std::path::absolute(dest, a3, v61);
  v21 = *(_QWORD *)&dest[8];
  if ( *(_QWORD *)dest == 0x8000000000000000LL )
    goto LABEL_11;
  v83 = *(_OWORD *)dest;
  v84 = *(_QWORD *)&dest[16];
  uucore::features::fs::canonicalize(&v70, &v83);
  v30 = v70;
  v21 = v71;
  if ( v70 == 0x8000000000000000LL )
    goto LABEL_11;
  v65 = v20;
  v31 = v72;
  v32 = v71;
  v33 = a2;
  v34 = std::path::Path::file_name(a1, a2);
  v36 = v35;
  if ( !v34 )
    v36 = 0LL;
  v37 = 1LL;
  if ( v34 )
    v37 = v34;
  std::path::Path::join(&v68, v32, v31, v37, v36);
  v38 = v30;
  v39 = v32;
LABEL_36:
  core::ptr::drop_in_place<std::path::PathBuf>(v38, v39);
  v59 = *((_QWORD *)&v68 + 1);
  v64 = v69;
  v45 = ((unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v18, v66)
      || (unsigned __int8)uucore::features::fs::are_hardlinks_to_same_file(a1, v33, a3, v61)
      || (unsigned __int8)uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(a1, v33, a3, v61))
     && a7 == 0;
  v47 = std::path::Path::file_name(a1, v33);
  if ( v47 && (v65 & 1) != 0 )
  {
    v48 = v46;
    v80[0] = a3;
    v80[1] = v61;
    <T as alloc::string::SpecToString>::spec_to_string(&v70, v80);
    v49 = core::str::<impl str>::trim_end_matches(v71, v72);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(dest, v49, v50, v51);
    *(_QWORD *)&v67[16] = *(_QWORD *)&dest[16];
    *(_OWORD *)v67 = *(_OWORD *)dest;
    core::ptr::drop_in_place<alloc::string::String>(&v70);
    alloc::string::String::push(v67, 47LL);
    alloc::string::String::from_utf8_lossy(dest, v47, v48);
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
      v67,
      *(_QWORD *)&dest[8],
      *(_QWORD *)&dest[8] + *(_QWORD *)&dest[16]);
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(dest);
    *(_QWORD *)dest = 0LL;
    *(_OWORD *)&dest[8] = *(_OWORD *)&v67[8];
    LOBYTE(v77) = 1;
    <T as alloc::string::SpecToString>::spec_to_string(&v74, dest);
    core::ptr::drop_in_place<alloc::string::String>(v67);
  }
  else
  {
    *(_QWORD *)dest = 1LL;
    *(_QWORD *)&dest[8] = a3;
    *(_QWORD *)&dest[16] = v61;
    LOBYTE(v77) = 1;
    <T as alloc::string::SpecToString>::spec_to_string(&v74, dest);
  }
  if ( v45 )
  {
    if ( (unsigned __int8)<std::path::PathBuf as core::cmp::PartialEq>::eq(v18, v66)
      || (std::path::Path::components(&v70, a1, v33),
          std::path::Path::components(dest, asc_2108F, 1LL),
          (unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v70, dest))
      || (unsigned __int8)std::path::Path::ends_with(a1, v33)
      || (v52 = 1, (unsigned __int8)std::path::Path::is_file(a1, v33)) )
    {
      v70 = 1LL;
      v71 = a1;
      v72 = v33;
      v73 = 1;
      <T as alloc::string::SpecToString>::spec_to_string(v67, &v70);
      v79 = v75;
      v78 = v74;
      *(_OWORD *)&dest[8] = *(_OWORD *)v67;
      v77 = *(_QWORD *)&v67[16];
      *(_QWORD *)dest = 2LL;
      v53 = alloc::boxed::Box<T>::new(dest);
      core::ptr::drop_in_place<std::path::PathBuf>(v68, v59);
      result = v53;
      goto LABEL_50;
    }
  }
  else
  {
    *(_QWORD *)dest = v17;
    *(_QWORD *)&dest[8] = v18;
    *(_QWORD *)&dest[16] = v66;
    if ( !(unsigned __int8)std::path::Path::starts_with(v59, v64, dest) )
    {
      core::ptr::drop_in_place<alloc::string::String>(&v74);
      v55 = v68;
      v56 = v59;
      goto LABEL_57;
    }
    v52 = 0;
  }
  if ( (unsigned __int8)std::path::Path::is_symlink(a1, v33) )
  {
    core::ptr::drop_in_place<alloc::string::String>(&v74);
    core::ptr::drop_in_place<std::path::PathBuf>(v68, v59);
    if ( !v52 )
      return 0LL;
    v55 = v17;
    v56 = v18;
LABEL_57:
    core::ptr::drop_in_place<std::path::PathBuf>(v55, v56);
    return 0LL;
  }
  v70 = 1LL;
  v71 = a1;
  v72 = v33;
  v73 = 1;
  <T as alloc::string::SpecToString>::spec_to_string(v67, &v70);
  v79 = v75;
  v78 = v74;
  *(_OWORD *)&dest[8] = *(_OWORD *)v67;
  v77 = *(_QWORD *)&v67[16];
  *(_QWORD *)dest = 3LL;
  v57 = alloc::boxed::Box<T>::new(dest);
  core::ptr::drop_in_place<std::path::PathBuf>(v68, v59);
  result = v57;
  if ( v52 )
    goto LABEL_50;
  return result;
}