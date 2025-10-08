__int64 __fastcall bat::assets::build_assets::acknowledgements::build_acknowledgements(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-2F8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-2F0h]
  __int128 v15; // [rsp+10h] [rbp-2E8h]
  __int128 v16; // [rsp+20h] [rbp-2D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-2C8h]
  __int64 v18; // [rsp+38h] [rbp-2C0h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp-2B8h]
  __int128 v20; // [rsp+58h] [rbp-2A0h]
  __int128 v21; // [rsp+68h] [rbp-290h]
  __int128 v22; // [rsp+78h] [rbp-280h]
  __int128 v23; // [rsp+88h] [rbp-270h] BYREF
  __int64 v24; // [rsp+98h] [rbp-260h]
  __int128 v25; // [rsp+A0h] [rbp-258h]
  __int128 v26; // [rsp+B0h] [rbp-248h]
  __int128 v27; // [rsp+C0h] [rbp-238h]
  _QWORD v28[9]; // [rsp+D0h] [rbp-228h] BYREF
  _QWORD v29[2]; // [rsp+118h] [rbp-1E0h] BYREF
  __int64 *v30; // [rsp+128h] [rbp-1D0h]
  _BYTE v31[24]; // [rsp+130h] [rbp-1C8h]
  __int64 v32; // [rsp+148h] [rbp-1B0h]
  __int128 v33; // [rsp+150h] [rbp-1A8h]
  __int64 v34; // [rsp+160h] [rbp-198h]
  __int64 v35; // [rsp+168h] [rbp-190h]
  __int128 v36; // [rsp+170h] [rbp-188h]
  __int64 v37; // [rsp+180h] [rbp-178h]
  __int128 v38; // [rsp+188h] [rbp-170h]
  __int128 v39; // [rsp+198h] [rbp-160h]
  __int128 v40; // [rsp+1A8h] [rbp-150h]
  __int128 v41; // [rsp+1B8h] [rbp-140h]
  unsigned __int64 v42; // [rsp+1C8h] [rbp-130h]
  unsigned __int64 v43; // [rsp+1F8h] [rbp-100h]
  __int64 v44; // [rsp+228h] [rbp-D0h]
  __int64 v45; // [rsp+230h] [rbp-C8h]
  unsigned __int64 v46; // [rsp+238h] [rbp-C0h]
  unsigned __int64 v47; // [rsp+280h] [rbp-78h]

  if ( a4 )
  {
    v14 = a1;
    v29[0] = &off_6CDF98;
    v29[1] = 1LL;
    v30 = &v13;
    *(_OWORD *)v31 = 0LL;
    core::option::Option<T>::map_or_else(&v16, aCopyrightC2018, 250LL, v29);
    walkdir::WalkDir::new(v29, a2, a3);
    walkdir::WalkDir::sort_by(&v23, v29);
    v40 = v27;
    v39 = v26;
    v38 = v25;
    v36 = v23;
    v37 = v24;
    v29[0] = 0LL;
    v30 = 0LL;
    *(_QWORD *)v31 = 8LL;
    *(_OWORD *)&v31[8] = 0LL;
    v32 = 8LL;
    v33 = 0LL;
    v34 = 8LL;
    v35 = 0LL;
    v41 = 0LL;
    v42 = 0x8000000000000001LL;
    v43 = 0x8000000000000001LL;
    v44 = a2;
    v45 = a3;
    v46 = 0x8000000000000001LL;
    v47 = 0x8000000000000001LL;
    while ( 1 )
    {
      <core::iter::adapters::flatten::FlattenCompat<I,U> as core::iter::traits::iterator::Iterator>::next(v28, v29);
      if ( v28[0] == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::iter::adapters::flatten::FlatMap<core::iter::adapters::flatten::Flatten<walkdir::IntoIter>,core::option::Option<bat::assets::build_assets::acknowledgements::PathAndStem>,bat::assets::build_assets::acknowledgements::build_acknowledgements::{{closure}}>>(v29);
        result = v17;
        v9 = v14;
        *(_QWORD *)(v14 + 24) = v17;
        *(_OWORD *)(v9 + 8) = v16;
        *(_BYTE *)v9 = 13;
        return result;
      }
      v5 = v28[7];
      v6 = v28[8];
      bat::assets::build_assets::acknowledgements::handle_file(&v18, v28);
      v7 = v18;
      if ( (_BYTE)v18 != 13 )
        break;
      v15 = *(_OWORD *)&v19[8];
      if ( *(_QWORD *)v19 != 0x8000000000000000LL )
      {
        v18 = *(_QWORD *)v19;
        *(_OWORD *)v19 = v15;
        bat::assets::build_assets::acknowledgements::append_to_acknowledgements(
          &v16,
          v5,
          v6,
          v15,
          *((_QWORD *)&v15 + 1));
        core::ptr::drop_in_place<alloc::string::String>(&v18);
      }
      core::ptr::drop_in_place<bat::assets::build_assets::acknowledgements::PathAndStem>(v28);
    }
    v10 = *(_DWORD *)((char *)&v18 + 1);
    v11 = v14;
    *(_DWORD *)(v14 + 4) = HIDWORD(v18);
    *(_DWORD *)(v11 + 1) = v10;
    v12 = *(_QWORD *)v19;
    v15 = *(_OWORD *)&v19[8];
    *(_OWORD *)(v11 + 64) = v22;
    *(_OWORD *)(v11 + 48) = v21;
    *(_OWORD *)(v11 + 32) = v20;
    *(_OWORD *)(v11 + 16) = v15;
    *(_BYTE *)v11 = v7;
    *(_QWORD *)(v11 + 8) = v12;
    core::ptr::drop_in_place<bat::assets::build_assets::acknowledgements::PathAndStem>(v28);
    core::ptr::drop_in_place<core::iter::adapters::flatten::FlatMap<core::iter::adapters::flatten::Flatten<walkdir::IntoIter>,core::option::Option<bat::assets::build_assets::acknowledgements::PathAndStem>,bat::assets::build_assets::acknowledgements::build_acknowledgements::{{closure}}>>(v29);
    return core::ptr::drop_in_place<alloc::string::String>(&v16);
  }
  else
  {
    result = 0x8000000000000000LL;
    *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
    *(_BYTE *)a1 = 13;
  }
  return result;
}