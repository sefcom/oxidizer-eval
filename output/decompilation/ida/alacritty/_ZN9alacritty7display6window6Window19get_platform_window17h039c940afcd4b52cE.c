void *__fastcall alacritty::display::window::Window::get_platform_window(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5)
{
  __int64 v8; // rax
  int v9; // ebp
  int v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v15; // [rsp+8h] [rbp-940h] BYREF
  __int64 v16; // [rsp+18h] [rbp-930h]
  __int128 v17; // [rsp+20h] [rbp-928h] BYREF
  __int128 v18; // [rsp+30h] [rbp-918h]
  __int128 v19; // [rsp+40h] [rbp-908h]
  __int128 v20; // [rsp+50h] [rbp-8F8h]
  __int64 v21; // [rsp+68h] [rbp-8E0h]
  char v22; // [rsp+70h] [rbp-8D8h]
  _BYTE v23[32]; // [rsp+78h] [rbp-8D0h] BYREF
  _OWORD src[51]; // [rsp+98h] [rbp-8B0h] BYREF
  _QWORD dest[83]; // [rsp+3D0h] [rbp-578h] BYREF
  int v26; // [rsp+668h] [rbp-2E0h]
  _BYTE v27[576]; // [rsp+708h] [rbp-240h] BYREF

  v21 = a4;
  v22 = a5;
  *(_QWORD *)&v17 = &unk_1021AA;
  *((_QWORD *)&v17 + 1) = 3612LL;
  *(_QWORD *)&v18 = 0LL;
  png::decoder::read_decoder::ReadDecoder<R>::new(src);
  *(_QWORD *)&src[36] = 0x4000000LL;
  memcpy(dest, src, sizeof(dest));
  v26 = 17;
  png::decoder::Decoder<R>::read_info(src, dest);
  core::result::Result<T,E>::expect(dest, src);
  v8 = png::decoder::Reader<R>::output_buffer_size(dest);
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v15, v8, &off_8822E8);
  png::decoder::Reader<R>::next_frame(src, dest, *((_QWORD *)&v15 + 1), v16);
  core::ptr::drop_in_place<core::result::Result<png::decoder::OutputInfo,png::decoder::stream::DecodingError>>(src);
  *(_QWORD *)&v18 = v16;
  v17 = v15;
  if ( __OFSUB__(0LL, dest[14]) )
    core::option::unwrap_failed(&off_877E98);
  winit::icon::Icon::from_rgba(src, &v17, LODWORD(dest[66]), HIDWORD(dest[66]));
  core::result::Result<T,E>::expect(v23, src);
  core::ptr::drop_in_place<png::decoder::Reader<std::io::cursor::Cursor<&[u8]>>>(dest);
  <winit::window::WindowAttributes as core::default::Default>::default(src);
  <winit::window::WindowAttributes as winit::platform::x11::WindowAttributesExtX11>::with_name(dest, src);
  BYTE1(dest[65]) = a3 != 3;
  memcpy(v27, dest, 0x210uLL);
  winit::window::WindowAttributes::with_window_icon(src, v27);
  if ( a5 == 2 )
  {
    v20 = src[3];
    v19 = src[2];
    v18 = src[1];
    v17 = src[0];
    v9 = src[4];
    v10 = DWORD1(src[4]);
    memcpy(dest, (char *)&src[4] + 8, 0x1C8uLL);
  }
  else
  {
    *(_QWORD *)&v15 = a4;
    BYTE8(v15) = a5;
    v17 = src[0];
    v18 = src[1];
    v19 = src[2];
    v20 = src[3];
    memcpy(dest, (char *)&src[4] + 8, 0x1C8uLL);
    v10 = *(_DWORD *)(a4 + 8);
    core::ptr::drop_in_place<glutin::platform::x11::X11VisualInfo>(&v15);
    v9 = 1;
  }
  v11 = v17;
  v12 = v18;
  v13 = v19;
  *(_OWORD *)(a1 + 48) = v20;
  *(_OWORD *)(a1 + 32) = v13;
  *(_OWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  *(_DWORD *)(a1 + 64) = v9;
  *(_DWORD *)(a1 + 68) = v10;
  return memcpy((void *)(a1 + 72), dest, 0x1C8uLL);
}