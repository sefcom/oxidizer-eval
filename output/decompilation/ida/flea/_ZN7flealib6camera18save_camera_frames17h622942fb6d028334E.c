_OWORD *__fastcall flealib::camera::save_camera_frames(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // rax
  _OWORD *v9; // rbx
  unsigned int v10; // [rsp+4h] [rbp-1F4h] BYREF
  _QWORD *v11; // [rsp+8h] [rbp-1F0h]
  __int128 v12; // [rsp+10h] [rbp-1E8h] BYREF
  __int128 v13; // [rsp+20h] [rbp-1D8h] BYREF
  __int128 *v14; // [rsp+30h] [rbp-1C8h]
  __int64 v15; // [rsp+38h] [rbp-1C0h]
  __int64 v16; // [rsp+40h] [rbp-1B8h]
  _BYTE v17[4]; // [rsp+50h] [rbp-1A8h] BYREF
  int v18; // [rsp+54h] [rbp-1A4h]
  __int64 v19; // [rsp+58h] [rbp-1A0h]
  __int128 v20; // [rsp+60h] [rbp-198h] BYREF
  __int64 v21; // [rsp+70h] [rbp-188h]
  _QWORD v22[2]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v23; // [rsp+88h] [rbp-170h] BYREF
  __int128 v24; // [rsp+98h] [rbp-160h]
  int *v25; // [rsp+A8h] [rbp-150h]
  __int64 (__fastcall *v26)(); // [rsp+B0h] [rbp-148h]
  __int128 v27; // [rsp+138h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+148h] [rbp-B0h]
  _QWORD v29[13]; // [rsp+150h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+1BCh] [rbp-3Ch]

  v22[0] = a3;
  v22[1] = a4;
  std::fs::metadata(&v23, aDevVideo0, 11LL);
  v4 = v23;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v23);
  if ( v4 == 2 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1, aCameraNotFound, 16LL);
    return a1;
  }
  else
  {
    std::sync::mpmc::channel(&v23);
    v12 = v24;
    LODWORD(v14) = a2;
    v13 = v23;
    *(_QWORD *)&v24 = 0x8000000000000000LL;
    *(_QWORD *)&v23 = 0LL;
    LOBYTE(v26) = 0;
    std::thread::Builder::spawn_unchecked(v29, &v23, &v13);
    core::result::Result<T,E>::expect(&v23, v29);
    core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v23);
    v11 = a1;
    if ( a2 )
    {
      v6 = 0;
      while ( 1 )
      {
        v7 = <u32 as core::iter::range::Step>::forward_unchecked(v6);
        v10 = v6;
        std::sync::mpmc::Receiver<T>::recv(&v23, &v12);
        core::result::Result<T,E>::unwrap(v29, &v23);
        *(_QWORD *)&v23 = v22;
        *((_QWORD *)&v23 + 1) = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v24 = &off_708488;
        *((_QWORD *)&v24 + 1) = <&T as core::fmt::Display>::fmt;
        v25 = (int *)&v10;
        v26 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        *(_QWORD *)&v13 = &unk_708418;
        *((_QWORD *)&v13 + 1) = 4LL;
        v16 = 0LL;
        v14 = &v23;
        v15 = 3LL;
        core::option::Option<T>::map_or_else(&v27, &v13);
        v20 = v27;
        v21 = v28;
        std::fs::File::create(v17, &v20);
        if ( (v17[0] & 1) != 0 )
          break;
        LODWORD(v23) = v18;
        v8 = std::io::Write::write_all(&v23, *(_QWORD *)(v29[0] + 16LL), v30);
        core::result::Result<T,E>::unwrap(v8);
        core::ptr::drop_in_place<std::fs::File>((unsigned int)v23);
        core::ptr::drop_in_place<rscam::Frame>(v29);
        core::ptr::drop_in_place<alloc::string::String>(&v20);
        v6 = v7;
        if ( v7 >= a2 )
          goto LABEL_7;
      }
      *(_QWORD *)&v13 = v19;
      <T as alloc::string::SpecToString>::spec_to_string(&v23, &v13);
      v9 = v11;
      v11[2] = v24;
      *v9 = v23;
      core::ptr::drop_in_place<std::io::error::Error>(&v13);
      core::ptr::drop_in_place<rscam::Frame>(v29);
      core::ptr::drop_in_place<alloc::string::String>(&v20);
    }
    else
    {
LABEL_7:
      v9 = v11;
      *v11 = 0x8000000000000000LL;
    }
    core::ptr::drop_in_place<std::sync::mpsc::Receiver<rscam::Frame>>(&v12);
    return v9;
  }
}