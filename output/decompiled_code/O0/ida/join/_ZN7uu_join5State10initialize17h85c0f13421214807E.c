__int64 __fastcall uu_join::State::initialize(int a1, int a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  int v5; // [rsp+0h] [rbp-1D8h]
  int v6; // [rsp+8h] [rbp-1D0h]
  int v7[2]; // [rsp+10h] [rbp-1C8h]
  int v8; // [rsp+18h] [rbp-1C0h]
  char v9; // [rsp+1Fh] [rbp-1B9h]
  int v10; // [rsp+20h] [rbp-1B8h]
  __int64 v11; // [rsp+20h] [rbp-1B8h]
  __int64 v12; // [rsp+28h] [rbp-1B0h] BYREF
  int v13; // [rsp+30h] [rbp-1A8h]
  int v14; // [rsp+38h] [rbp-1A0h]
  int v15; // [rsp+40h] [rbp-198h]
  char v16; // [rsp+48h] [rbp-190h]
  int v17; // [rsp+50h] [rbp-188h]
  __int64 src; // [rsp+58h] [rbp-180h] BYREF
  __int64 v19; // [rsp+60h] [rbp-178h]
  int v20; // [rsp+68h] [rbp-170h]
  int v21; // [rsp+70h] [rbp-168h]
  int v22; // [rsp+78h] [rbp-160h]
  int v23; // [rsp+80h] [rbp-158h]
  int dest[12]; // [rsp+88h] [rbp-150h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-120h] BYREF
  int v26[12]; // [rsp+C0h] [rbp-118h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v28; // [rsp+100h] [rbp-D8h]
  __int64 v29; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+118h] [rbp-C0h]
  int v31[12]; // [rsp+120h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+150h] [rbp-88h] BYREF
  __int128 v33; // [rsp+160h] [rbp-78h]
  int v34[4]; // [rsp+170h] [rbp-68h] BYREF
  struct _Unwind_Exception *v35; // [rsp+180h] [rbp-58h]
  int v36; // [rsp+188h] [rbp-50h]
  char v37; // [rsp+1A7h] [rbp-31h]
  __int64 *v38; // [rsp+1B8h] [rbp-20h]
  __int64 (__fastcall *v39)(); // [rsp+1C0h] [rbp-18h]
  __int64 *v40; // [rsp+1C8h] [rbp-10h]
  __int64 (__fastcall *v41)(); // [rsp+1D0h] [rbp-8h]

  v37 = 0;
  uu_join::State::read_line(
    (int)&src,
    a1,
    a2,
    v5,
    v6,
    a1,
    v8,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    src,
    v19,
    v20,
    v21,
    v22,
    v23,
    dest[0],
    dest[2],
    dest[4],
    dest[6],
    dest[8],
    dest[10],
    v25,
    v26[0],
    v26[2],
    v26[4],
    v26[6],
    v26[8],
    v26[10],
    v27,
    SDWORD2(v27),
    v28,
    SDWORD2(v28),
    v29,
    v30,
    v31[0],
    v31[2],
    v31[4],
    v31[6],
    v31[8],
    v31[10],
    v32,
    SDWORD2(v32),
    v33,
    SDWORD2(v33),
    v34[0],
    v34[2],
    v35,
    v36);
  if ( src == 0x8000000000000001LL )
  {
    v25 = v19;
    v29 = uucore::util_name();
    v30 = v4;
    v40 = &v29;
    v41 = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v28 = &v29;
    *((_QWORD *)&v28 + 1) = <&T as core::fmt::Display>::fmt;
    v27 = v28;
    core::fmt::Arguments::new_v1(v26, &unk_12E230, &v27);
    std::io::stdio::_eprint(v26);
    v38 = &v25;
    v39 = <std::io::error::Error as core::fmt::Display>::fmt;
    *(_QWORD *)&v33 = &v25;
    *((_QWORD *)&v33 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
    v32 = v33;
    core::fmt::Arguments::new_v1(v31, &unk_12E250, &v32);
    std::io::stdio::_eprint(v31);
    std::process::exit(1);
  }
  memcpy(dest, &src, sizeof(dest));
  v37 = 1;
  memcpy(&v12, dest, 0x30uLL);
  if ( v12 != 0x8000000000000000LL
    && (v37 = 0, memcpy(v34, &v12, 0x30uLL), alloc::vec::Vec<T,A>::push(*(_QWORD *)v7, v34), (v9 & 1) != 0) )
  {
    v2 = <alloc::vec::Vec<T,A> as core::ops::index::Index<I>>::index(*(_QWORD *)v7, 0LL, &off_12E218);
    v11 = alloc::vec::Vec<T,A>::len(v2);
    v37 = 0;
  }
  else
  {
    if ( v12 != 0x8000000000000000LL && (v37 & 1) != 0 )
      core::ptr::drop_in_place<uu_join::Line>(&v12);
    v37 = 0;
    return 0LL;
  }
  return v11;
}
