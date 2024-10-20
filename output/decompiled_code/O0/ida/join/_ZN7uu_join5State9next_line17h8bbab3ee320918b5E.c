__int64 __fastcall uu_join::State::next_line(int a1, int a2, int a3)
{
  __int64 v3; // rdx
  __int64 field; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v10; // [rsp+0h] [rbp-4A8h]
  int v11; // [rsp+8h] [rbp-4A0h]
  int v12; // [rsp+10h] [rbp-498h]
  int v13; // [rsp+18h] [rbp-490h]
  char v14; // [rsp+1Fh] [rbp-489h]
  int v15; // [rsp+20h] [rbp-488h]
  int v16; // [rsp+28h] [rbp-480h]
  int v17; // [rsp+30h] [rbp-478h]
  char v18; // [rsp+36h] [rbp-472h]
  int v19; // [rsp+38h] [rbp-470h]
  __int64 current_key; // [rsp+38h] [rbp-470h]
  int v21; // [rsp+40h] [rbp-468h]
  __int64 v22; // [rsp+40h] [rbp-468h]
  char v23; // [rsp+48h] [rbp-460h]
  int v24; // [rsp+50h] [rbp-458h]
  int v25; // [rsp+58h] [rbp-450h]
  char v26; // [rsp+60h] [rbp-448h]
  int v27; // [rsp+68h] [rbp-440h]
  __int64 v28; // [rsp+70h] [rbp-438h]
  int v29[2]; // [rsp+78h] [rbp-430h]
  _QWORD *v30; // [rsp+80h] [rbp-428h]
  int v31[2]; // [rsp+88h] [rbp-420h]
  __int128 v32; // [rsp+90h] [rbp-418h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-408h]
  __int128 v34; // [rsp+B0h] [rbp-3F8h]
  __int64 src; // [rsp+C0h] [rbp-3E8h] BYREF
  __int64 v36; // [rsp+C8h] [rbp-3E0h]
  int v37; // [rsp+D0h] [rbp-3D8h]
  int v38; // [rsp+D8h] [rbp-3D0h]
  int v39; // [rsp+E0h] [rbp-3C8h]
  int v40; // [rsp+E8h] [rbp-3C0h]
  int v41[12]; // [rsp+F0h] [rbp-3B8h] BYREF
  int dest[12]; // [rsp+120h] [rbp-388h] BYREF
  __int128 v43; // [rsp+150h] [rbp-358h] BYREF
  __int128 v44; // [rsp+160h] [rbp-348h] BYREF
  __int128 v45; // [rsp+170h] [rbp-338h]
  struct _Unwind_Exception *v46; // [rsp+180h] [rbp-328h] BYREF
  int v47; // [rsp+188h] [rbp-320h]
  _BYTE v48[55]; // [rsp+1B0h] [rbp-2F8h] BYREF
  char v49; // [rsp+1E7h] [rbp-2C1h] BYREF
  __int64 v50; // [rsp+1E8h] [rbp-2C0h] BYREF
  __int64 v51; // [rsp+1F0h] [rbp-2B8h]
  __int64 v52; // [rsp+1F8h] [rbp-2B0h]
  __int64 v53; // [rsp+200h] [rbp-2A8h]
  __int64 v54; // [rsp+208h] [rbp-2A0h]
  __int64 v55; // [rsp+210h] [rbp-298h]
  __int64 v56; // [rsp+218h] [rbp-290h] BYREF
  __int64 v57; // [rsp+220h] [rbp-288h]
  __int64 v58; // [rsp+228h] [rbp-280h]
  _BYTE v59[48]; // [rsp+230h] [rbp-278h] BYREF
  _OWORD v60[3]; // [rsp+260h] [rbp-248h] BYREF
  __int128 v61; // [rsp+298h] [rbp-210h]
  _BYTE v62[32]; // [rsp+2A8h] [rbp-200h] BYREF
  __int128 v63; // [rsp+2C8h] [rbp-1E0h]
  __int128 v64; // [rsp+2D8h] [rbp-1D0h]
  _BYTE v65[24]; // [rsp+2E8h] [rbp-1C0h] BYREF
  __int64 v66; // [rsp+300h] [rbp-1A8h]
  __int64 v67; // [rsp+308h] [rbp-1A0h]
  __int64 v68; // [rsp+310h] [rbp-198h]
  __int64 v69; // [rsp+318h] [rbp-190h]
  __int64 v70; // [rsp+320h] [rbp-188h]
  __int64 v71; // [rsp+328h] [rbp-180h]
  _BYTE v72[48]; // [rsp+330h] [rbp-178h] BYREF
  _OWORD v73[2]; // [rsp+360h] [rbp-148h] BYREF
  __int128 v74; // [rsp+380h] [rbp-128h]
  _QWORD v75[2]; // [rsp+390h] [rbp-118h] BYREF
  __int128 v76; // [rsp+3A0h] [rbp-108h]
  _BYTE v77[48]; // [rsp+3B0h] [rbp-F8h] BYREF
  _BYTE v78[48]; // [rsp+3E0h] [rbp-C8h] BYREF
  unsigned __int64 v79[6]; // [rsp+410h] [rbp-98h] BYREF
  char v80; // [rsp+446h] [rbp-62h]
  char v81; // [rsp+447h] [rbp-61h]
  __int64 v82; // [rsp+458h] [rbp-50h]
  __int64 (__fastcall *v83)(); // [rsp+460h] [rbp-48h]
  _BYTE *v84; // [rsp+468h] [rbp-40h]
  __int64 (__fastcall *v85)(); // [rsp+470h] [rbp-38h]
  __int64 *v86; // [rsp+478h] [rbp-30h]
  __int64 (__fastcall *v87)(); // [rsp+480h] [rbp-28h]
  _QWORD *v88; // [rsp+488h] [rbp-20h]
  __int64 (__fastcall *v89)(); // [rsp+490h] [rbp-18h]
  _BYTE *v90; // [rsp+498h] [rbp-10h]
  __int64 (__fastcall *v91)(); // [rsp+4A0h] [rbp-8h]

  v81 = 0;
  v80 = 0;
  uu_join::State::read_line(
    (int)v41,
    a2,
    a3,
    v10,
    v11,
    v12,
    v13,
    v15,
    v16,
    v17,
    v19,
    v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    a3,
    a2,
    a1,
    a1,
    v32,
    SDWORD2(v32),
    v33,
    SDWORD2(v33),
    v34,
    SDWORD2(v34),
    src,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41[0],
    v41[2],
    v41[4],
    v41[6],
    v41[8],
    v41[10],
    dest[0],
    dest[2],
    dest[4],
    dest[6],
    dest[8],
    dest[10],
    v43,
    SDWORD2(v43),
    v44,
    SDWORD2(v44),
    v45,
    SDWORD2(v45),
    v46,
    v47);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&src, v41);
  if ( src == 0x8000000000000001LL )
  {
    <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
      v30,
      v36,
      &off_12E498);
LABEL_24:
    v80 = 0;
    return *(_QWORD *)v31;
  }
  memcpy(dest, &src, sizeof(dest));
  v80 = 1;
  memcpy(&v32, dest, 0x30uLL);
  if ( (_QWORD)v32 == 0x8000000000000000LL )
  {
    v79[0] = 0x8000000000000000LL;
    memcpy(v30, v79, 0x30uLL);
    goto LABEL_19;
  }
  v80 = 0;
  v81 = 1;
  v45 = v34;
  v44 = v33;
  v43 = v32;
  if ( (<uu_join::CheckOrder as core::cmp::PartialEq>::eq(v28 + 289, &unk_EC8F) & 1) != 0 )
  {
    v81 = 0;
    memcpy(v48, &v43, 0x30uLL);
    memcpy(&v46, v48, 0x30uLL);
    memcpy(v30, &v46, 0x30uLL);
LABEL_21:
    if ( (v81 & 1) != 0 )
      core::ptr::drop_in_place<uu_join::Line>(&v43);
    v81 = 0;
    goto LABEL_24;
  }
  current_key = uu_join::State::get_current_key(*(_QWORD *)v29);
  v22 = v3;
  field = uu_join::Line::get_field(&v43, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
  v49 = uu_join::Input<Sep>::compare(v28, current_key, v22, field, v5);
  v18 = <core::cmp::Ordering as core::cmp::PartialEq>::eq(&v49, &unk_EC8F);
  if ( (v18 & 1) == 0
    || (<uu_join::CheckOrder as core::cmp::PartialEq>::eq(v28 + 289, &unk_EC90) & 1) == 0
    && ((*(_BYTE *)(*(_QWORD *)v29 + 91LL) & 1) == 0 || (*(_BYTE *)(*(_QWORD *)v29 + 90LL) & 1) != 0) )
  {
    goto LABEL_9;
  }
  os_display::native::Quotable::maybe_quote(v62, *(_QWORD *)(*(_QWORD *)v29 + 24LL), *(_QWORD *)(*(_QWORD *)v29 + 32LL));
  v90 = v62;
  v91 = <os_display::Quoted as core::fmt::Display>::fmt;
  *(_QWORD *)&v61 = v62;
  *((_QWORD *)&v61 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
  v82 = *(_QWORD *)v29 + 80LL;
  v83 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  *(_QWORD *)&v63 = *(_QWORD *)v29 + 80LL;
  *((_QWORD *)&v63 + 1) = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v6 = <alloc::vec::Vec<T,A> as core::ops::deref::Deref>::deref((char *)&v44 + 8);
  alloc::string::String::from_utf8_lossy(v65, v6, v7);
  v84 = v65;
  v85 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  *(_QWORD *)&v64 = v65;
  *((_QWORD *)&v64 + 1) = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v60[0] = v61;
  v60[1] = v63;
  v60[2] = v64;
  core::fmt::Arguments::new_v1(v59, &unk_12E438, v60);
  alloc::fmt::format(&v56, v59);
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v65);
  v53 = v56;
  v54 = v57;
  v55 = v58;
  v50 = v56;
  v51 = v57;
  v52 = v58;
  v14 = <uu_join::CheckOrder as core::cmp::PartialEq>::eq(v28 + 289, &unk_EC90);
  if ( (v14 & 1) != 0 )
  {
    v69 = v50;
    v70 = v51;
    v71 = v52;
    v66 = v50;
    v67 = v51;
    v68 = v52;
    v30[1] = v50;
    v30[2] = v67;
    v30[3] = v68;
    *v30 = 0x8000000000000001LL;
    goto LABEL_21;
  }
  v75[0] = uucore::execution_phrase();
  v75[1] = v8;
  v88 = v75;
  v89 = <&T as core::fmt::Display>::fmt;
  *(_QWORD *)&v74 = v75;
  *((_QWORD *)&v74 + 1) = <&T as core::fmt::Display>::fmt;
  v86 = &v50;
  v87 = <alloc::string::String as core::fmt::Display>::fmt;
  *(_QWORD *)&v76 = &v50;
  *((_QWORD *)&v76 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
  v73[0] = v74;
  v73[1] = v76;
  core::fmt::Arguments::new_v1(v72, &unk_12E468, v73);
  std::io::stdio::_eprint(v72);
  *(_BYTE *)(*(_QWORD *)v29 + 90LL) = 1;
  core::ptr::drop_in_place<alloc::string::String>(&v50);
LABEL_9:
  v81 = 0;
  memcpy(v78, &v43, sizeof(v78));
  memcpy(v77, v78, sizeof(v77));
  memcpy(v30, v77, 0x30uLL);
  v81 = 0;
LABEL_19:
  if ( (_QWORD)v32 != 0x8000000000000000LL && (v80 & 1) != 0 )
    core::ptr::drop_in_place<uu_join::Line>(&v32);
  v80 = 0;
  return *(_QWORD *)v31;
}
