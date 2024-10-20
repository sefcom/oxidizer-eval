        __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // [rsp+8h] [rbp-760h]
  __int64 v27; // [rsp+10h] [rbp-758h]
  __int64 v28; // [rsp+20h] [rbp-748h]
  __int64 v29; // [rsp+28h] [rbp-740h]
  __int64 v30; // [rsp+40h] [rbp-728h]
  __int64 v31; // [rsp+48h] [rbp-720h]
  __int64 v32; // [rsp+70h] [rbp-6F8h]
  __int64 v33; // [rsp+78h] [rbp-6F0h]
  int v34[2]; // [rsp+B0h] [rbp-6B8h]
  __int64 v35; // [rsp+C8h] [rbp-6A0h]
  __int64 v36; // [rsp+D0h] [rbp-698h]
  __int64 v37; // [rsp+E8h] [rbp-680h]
  __int64 v38; // [rsp+F0h] [rbp-678h]
  char is_none; // [rsp+107h] [rbp-661h]
  __int64 v40; // [rsp+120h] [rbp-648h]
  __int64 v41; // [rsp+128h] [rbp-640h]
  int v42[2]; // [rsp+158h] [rbp-610h]
  int v43[2]; // [rsp+160h] [rbp-608h]
  int i; // [rsp+1ACh] [rbp-5BCh]
  _BYTE src[40]; // [rsp+1B0h] [rbp-5B8h] BYREF
  _BYTE v50[40]; // [rsp+1D8h] [rbp-590h] BYREF
  _BYTE dest[40]; // [rsp+200h] [rbp-568h] BYREF
  __int128 v52; // [rsp+228h] [rbp-540h] BYREF
  __int64 v53; // [rsp+238h] [rbp-530h]
  __int128 v54; // [rsp+240h] [rbp-528h] BYREF
  __int64 v55; // [rsp+250h] [rbp-518h]
  __int64 v56; // [rsp+260h] [rbp-508h]
  int v57[2]; // [rsp+268h] [rbp-500h] BYREF
  __int64 v58; // [rsp+270h] [rbp-4F8h]
  __int64 v59; // [rsp+278h] [rbp-4F0h]
  __int64 v60; // [rsp+280h] [rbp-4E8h]
  _QWORD v61[3]; // [rsp+288h] [rbp-4E0h] BYREF
  __int128 v62; // [rsp+2A0h] [rbp-4C8h] BYREF
  __int64 v63; // [rsp+2B0h] [rbp-4B8h]
  __int128 v64; // [rsp+2B8h] [rbp-4B0h] BYREF
  __int64 v65; // [rsp+2C8h] [rbp-4A0h]
  __int128 v66; // [rsp+2D0h] [rbp-498h]
  __int64 v67; // [rsp+2E0h] [rbp-488h]
  int v68[6]; // [rsp+2E8h] [rbp-480h] BYREF
  int v69[4]; // [rsp+300h] [rbp-468h] BYREF
  __int64 v70; // [rsp+310h] [rbp-458h]
  _BYTE v71[48]; // [rsp+318h] [rbp-450h] BYREF
  __int64 v72; // [rsp+348h] [rbp-420h]
  _BYTE v73[8]; // [rsp+350h] [rbp-418h] BYREF
  __int128 v74; // [rsp+358h] [rbp-410h]
  __int64 v75; // [rsp+368h] [rbp-400h]
  __int128 v76; // [rsp+370h] [rbp-3F8h] BYREF
  __int64 v77; // [rsp+380h] [rbp-3E8h]
  __int64 v78; // [rsp+388h] [rbp-3E0h]
  __int128 v79; // [rsp+390h] [rbp-3D8h] BYREF
  __int64 v80; // [rsp+3A0h] [rbp-3C8h]
  __int128 v81; // [rsp+3A8h] [rbp-3C0h] BYREF
  __int64 v82; // [rsp+3B8h] [rbp-3B0h]
  __int128 v83; // [rsp+3C0h] [rbp-3A8h]
  __int64 v84; // [rsp+3D0h] [rbp-398h]
  _QWORD v85[5]; // [rsp+3E0h] [rbp-388h] BYREF
  _QWORD v86[3]; // [rsp+408h] [rbp-360h] BYREF
  __int64 v87; // [rsp+420h] [rbp-348h]
  int v88[2]; // [rsp+428h] [rbp-340h] BYREF
  __int64 v89; // [rsp+430h] [rbp-338h]
  __int64 v90; // [rsp+438h] [rbp-330h]
  __int64 v91; // [rsp+440h] [rbp-328h]
  _QWORD v92[3]; // [rsp+448h] [rbp-320h] BYREF
  __int128 v93; // [rsp+460h] [rbp-308h] BYREF
  __int64 v94; // [rsp+470h] [rbp-2F8h]
  __int128 v95; // [rsp+478h] [rbp-2F0h] BYREF
  __int64 v96; // [rsp+488h] [rbp-2E0h]
  __int128 v97; // [rsp+490h] [rbp-2D8h]
  __int64 v98; // [rsp+4A0h] [rbp-2C8h]
  _BYTE v99[40]; // [rsp+4B0h] [rbp-2B8h] BYREF
  _BYTE v100[40]; // [rsp+4D8h] [rbp-290h] BYREF
  _BYTE v101[40]; // [rsp+500h] [rbp-268h] BYREF
  __int128 v102; // [rsp+528h] [rbp-240h] BYREF
  __int64 v103; // [rsp+538h] [rbp-230h]
  __int128 v104; // [rsp+540h] [rbp-228h] BYREF
  __int64 v105; // [rsp+550h] [rbp-218h]
  __int64 v106; // [rsp+560h] [rbp-208h]
  int v107[6]; // [rsp+568h] [rbp-200h] BYREF
  int v108[4]; // [rsp+580h] [rbp-1E8h] BYREF
  __int64 v109; // [rsp+590h] [rbp-1D8h]
  _BYTE v110[48]; // [rsp+598h] [rbp-1D0h] BYREF
  _QWORD v111[5]; // [rsp+5C8h] [rbp-1A0h] BYREF
  _QWORD v112[3]; // [rsp+5F0h] [rbp-178h] BYREF
  int v113[4]; // [rsp+608h] [rbp-160h] BYREF
  __int64 v114; // [rsp+618h] [rbp-150h]
  int v115[4]; // [rsp+620h] [rbp-148h] BYREF
  __int64 v116; // [rsp+630h] [rbp-138h]
  __int128 v117; // [rsp+640h] [rbp-128h] BYREF
  __int64 v118; // [rsp+650h] [rbp-118h]
  __int64 v119; // [rsp+658h] [rbp-110h]
  _BYTE v120[40]; // [rsp+660h] [rbp-108h] BYREF
  _BYTE v121[40]; // [rsp+688h] [rbp-E0h] BYREF
  _BYTE v122[40]; // [rsp+6B0h] [rbp-B8h] BYREF
  __int128 v123; // [rsp+6D8h] [rbp-90h] BYREF
  __int64 v124; // [rsp+6E8h] [rbp-80h]
  __int128 v125; // [rsp+6F0h] [rbp-78h] BYREF
  __int64 v126; // [rsp+700h] [rbp-68h]
  __int64 v127; // [rsp+708h] [rbp-60h]
  _QWORD v128[5]; // [rsp+710h] [rbp-58h] BYREF
  _QWORD v129[3]; // [rsp+738h] [rbp-30h] BYREF
  char v130; // [rsp+755h] [rbp-13h]
  char v131; // [rsp+756h] [rbp-12h]
  char v132; // [rsp+757h] [rbp-11h]

  v132 = 0;
  v131 = 0;
  v130 = 0;
  if ( a6 >= 0 )
  {
    uu_csplit::InputSplitter<I>::drain_buffer(v50, a7);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(src, v50);
    memcpy(dest, src, sizeof(dest));
    while ( 1 )
    {
      <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v52, dest);
      if ( (_QWORD)v52 == 0x8000000000000000LL )
        break;
      v55 = v53;
      v54 = v52;
      v16 = <alloc::string::String as core::ops::deref::Deref>::deref(&v54);
      v27 = uu_csplit::SplitWriter::writeln(a2, v16, v25);
      v26 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v27);
      v56 = v26;
      if ( v26 )
      {
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          v56,
          &off_2A2138);
        core::ptr::drop_in_place<alloc::string::String>(&v54);
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>::drain_buffer::{{closure}}>>(dest);
        return a1;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v54);
    }
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>::drain_buffer::{{closure}}>>(dest);
    uu_csplit::InputSplitter<I>::set_size_of_buffer(a7, 1LL);
    while ( 1 )
    {
      <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v57, a7);
      if ( v58 == 0x8000000000000001LL )
        break;
      *(_QWORD *)v34 = *(_QWORD *)v57;
      v61[0] = v58;
      v61[1] = v59;
      v61[2] = v60;
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v64, v61);
      if ( (_QWORD)v64 == 0x8000000000000000LL )
      {
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          *((_QWORD *)&v64 + 1),
          &off_2A2120);
        goto LABEL_91;
      }
      v67 = v65;
      v66 = v64;
      v132 = 1;
      v63 = v65;
      v62 = v64;
      v17 = <alloc::string::String as core::ops::deref::Deref>::deref(&v62);
      if ( (regex::regex::string::Regex::is_match(a5, v17, v18) & 1) != 0 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL) & 1) == 0 )
        {
          if ( a6 )
          {
            v21 = <alloc::string::String as core::ops::deref::Deref>::deref(&v62);
            v31 = uu_csplit::SplitWriter::writeln(a2, v21, v22);
            v30 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v31);
            v72 = v30;
            if ( v30 )
            {
              <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                a1,
                v72,
                &off_2A20A8);
              goto LABEL_66;
            }
          }
          else
          {
            v132 = 0;
            v70 = v63;
            *(_OWORD *)v69 = v62;
            uu_csplit::InputSplitter<I>::add_line_to_buffer(v68, a7, *(_QWORD *)v34, v69);
            if ( (core::option::Option<T>::is_none(v68) & 1) == 0 )
            {
              core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v68);
              core::fmt::Arguments::new_const(v71, &off_2A1F50);
              core::panicking::panic_fmt(v71, &off_2A2090);
            }
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v68);
          }
        }
        if ( __OFSUB__(a6, 1) )
          core::panicking::panic_const::panic_const_sub_overflow(&off_2A20C0);
        for ( i = a6 - 1; ; --i )
        {
          if ( i <= 0 )
          {
            uu_csplit::SplitWriter::finish_split(a2);
            *a1 = 12LL;
            goto LABEL_66;
          }
          <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v73, a7);
          if ( (_QWORD)v74 == 0x8000000000000001LL )
          {
            uu_csplit::SplitWriter::finish_split(a2);
            <str as alloc::string::ToString>::to_string(v86, a3, a4);
            v85[1] = v86[0];
            v85[2] = v86[1];
            v85[3] = v86[2];
            v85[0] = 1LL;
            memcpy(a1, v85, 0x28uLL);
            goto LABEL_66;
          }
          v77 = v75;
          v76 = v74;
          <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v81, &v76);
          if ( (_QWORD)v81 == 0x8000000000000000LL )
          {
            <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              a1,
              *((_QWORD *)&v81 + 1),
              &off_2A2108);
            goto LABEL_66;
          }
          v84 = v82;
          v83 = v81;
          v80 = v82;
          v79 = v81;
          v23 = <alloc::string::String as core::ops::deref::Deref>::deref(&v79);
          v29 = uu_csplit::SplitWriter::writeln(a2, v23, v24);
          v28 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v29);
          v78 = v28;
          if ( v28 )
            break;
          core::ptr::drop_in_place<alloc::string::String>(&v79);
          if ( __OFSUB__(i, 1) )
            core::panicking::panic_const::panic_const_sub_overflow(&off_2A20D8);
        }
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          v78,
          &off_2A20F0);
        core::ptr::drop_in_place<alloc::string::String>(&v79);
LABEL_66:
        if ( (v132 & 1) != 0 )
          core::ptr::drop_in_place<alloc::string::String>(&v62);
LABEL_91:
        v132 = 0;
        return a1;
      }
      v19 = <alloc::string::String as core::ops::deref::Deref>::deref(&v62);
      v33 = uu_csplit::SplitWriter::writeln(a2, v19, v20);
      v32 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v33);
      v87 = v32;
      if ( v32 )
      {
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          v87,
          &off_2A2078);
        goto LABEL_66;
      }
      core::ptr::drop_in_place<alloc::string::String>(&v62);
      v132 = 0;
    }
    core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>(v57);
LABEL_48:
    uu_csplit::SplitWriter::finish_split(a2);
    <str as alloc::string::ToString>::to_string(v129, a3, a4);
    v128[1] = v129[0];
    v128[2] = v129[1];
    v128[3] = v129[2];
    v128[0] = 3LL;
    memcpy(a1, v128, 0x28uLL);
  }
  else
  {
    if ( a6 == 0x80000000 )
      core::panicking::panic_const::panic_const_neg_overflow(&off_2A1FC0);
    *(_QWORD *)v43 = -a6;
    uu_csplit::InputSplitter<I>::set_size_of_buffer(a7, *(_QWORD *)v43);
    while ( 1 )
    {
      <uu_csplit::InputSplitter<I> as core::iter::traits::iterator::Iterator>::next(v88, a7);
      if ( v89 == 0x8000000000000001LL )
        break;
      *(_QWORD *)v42 = *(_QWORD *)v88;
      v92[0] = v89;
      v92[1] = v90;
      v92[2] = v91;
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v95, v92);
      if ( (_QWORD)v95 == 0x8000000000000000LL )
      {
        <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
          a1,
          *((_QWORD *)&v95 + 1),
          &off_2A2048);
LABEL_43:
        v131 = 0;
        return a1;
      }
      v98 = v96;
      v97 = v95;
      v131 = 1;
      v94 = v96;
      v93 = v95;
      v7 = <alloc::string::String as core::ops::deref::Deref>::deref(&v93);
      if ( (regex::regex::string::Regex::is_match(a5, v7, v8) & 1) != 0 )
      {
        uu_csplit::InputSplitter<I>::shrink_buffer_to_size(v100, a7);
        <I as core::iter::traits::collect::IntoIterator>::into_iter(v99, v100);
        memcpy(v101, v99, sizeof(v101));
        while ( 1 )
        {
          <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v102, v101);
          if ( (_QWORD)v102 == 0x8000000000000000LL )
            break;
          v105 = v103;
          v104 = v102;
          v12 = <alloc::string::String as core::ops::deref::Deref>::deref(&v104);
          v38 = uu_csplit::SplitWriter::writeln(a2, v12, v13);
          v37 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v38);
          v106 = v37;
          if ( v37 )
          {
            <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
              a1,
              v106,
              &off_2A2030);
            core::ptr::drop_in_place<alloc::string::String>(&v104);
            core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>::shrink_buffer_to_size::{{closure}}>>(v101);
            goto LABEL_38;
          }
          core::ptr::drop_in_place<alloc::string::String>(&v104);
        }
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>::shrink_buffer_to_size::{{closure}}>>(v101);
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 32) + 99LL) & 1) == 0 )
        {
          if ( *(_QWORD *)v43 == -1LL )
            core::panicking::panic_const::panic_const_add_overflow(&off_2A1FF0);
          uu_csplit::InputSplitter<I>::set_size_of_buffer(a7, *(_QWORD *)v43 + 1LL);
          v131 = 0;
          v109 = v94;
          *(_OWORD *)v108 = v93;
          uu_csplit::InputSplitter<I>::add_line_to_buffer(v107, a7, *(_QWORD *)v42, v108);
          is_none = core::option::Option<T>::is_none(v107);
          if ( (is_none & 1) == 0 )
          {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v107);
            core::fmt::Arguments::new_const(v110, &off_2A2008);
            core::panicking::panic_fmt(v110, &off_2A2018);
          }
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v107);
        }
        uu_csplit::SplitWriter::finish_split(a2);
        if ( (unsigned __int64)uu_csplit::InputSplitter<I>::buffer_len(a7) < *(_QWORD *)v43 )
        {
          <str as alloc::string::ToString>::to_string(v112, a3, a4);
          v111[1] = v112[0];
          v111[2] = v112[1];
          v111[3] = v112[2];
          v111[0] = 1LL;
          memcpy(a1, v111, 0x28uLL);
        }
        else
        {
          *a1 = 12LL;
        }
LABEL_38:
        if ( (v131 & 1) != 0 )
          core::ptr::drop_in_place<alloc::string::String>(&v93);
        goto LABEL_43;
      }
      v131 = 0;
      v116 = v94;
      *(_OWORD *)v115 = v93;
      uu_csplit::InputSplitter<I>::add_line_to_buffer(v113, a7, *(_QWORD *)v42, v115);
      v130 = 1;
      if ( *(_QWORD *)v113 != 0x8000000000000000LL )
      {
        v130 = 0;
        v118 = v114;
        v117 = *(_OWORD *)v113;
        v9 = <alloc::string::String as core::ops::deref::Deref>::deref(&v117);
        v41 = uu_csplit::SplitWriter::writeln(a2, v9, v10);
        v40 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v41);
        v119 = v40;
        if ( v40 )
        {
          <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
            a1,
            v119,
            &off_2A1FD8);
          core::ptr::drop_in_place<alloc::string::String>(&v117);
          v131 = 0;
          v130 = 0;
          return a1;
        }
        core::ptr::drop_in_place<alloc::string::String>(&v117);
      }
      v131 = 0;
      if ( *(_QWORD *)v113 != 0x8000000000000000LL && (v130 & 1) != 0 )
        core::ptr::drop_in_place<alloc::string::String>(v113);
      v130 = 0;
    }
    core::ptr::drop_in_place<core::option::Option<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>>(v88);
    uu_csplit::InputSplitter<I>::drain_buffer(v121, a7);
    <I as core::iter::traits::collect::IntoIterator>::into_iter(v120, v121);
    memcpy(v122, v120, sizeof(v122));
    while ( 1 )
    {
      <core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(&v123, v122);
      if ( (_QWORD)v123 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>::drain_buffer::{{closure}}>>(v122);
        goto LABEL_48;
      }
      v126 = v124;
      v125 = v123;
      v14 = <alloc::string::String as core::ops::deref::Deref>::deref(&v125);
      v36 = uu_csplit::SplitWriter::writeln(a2, v14, v15);
      v35 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v36);
      v127 = v35;
      if ( v35 )
        break;
      core::ptr::drop_in_place<alloc::string::String>(&v125);
    }
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      a1,
      v127,
      &off_2A2060);
    core::ptr::drop_in_place<alloc::string::String>(&v125);
    core::ptr::drop_in_place<core::iter::adapters::map::Map<alloc::vec::drain::Drain<(usize,core::result::Result<alloc::string::String,std::io::error::Error>)>,uu_csplit::InputSplitter<core::iter::adapters::enumerate::Enumerate<std::io::Lines<std::io::buffered::bufreader::BufReader<std::fs::File>>>>::drain_buffer::{{closure}}>>(v122);
  }
  return a1;
}
