void __fastcall sniffnet::networking::parse_packets::from_null(_DWORD *dest, __int64 a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  _QWORD src[1196]; // [rsp+8h] [rbp-2560h] BYREF

  src[681] = 0LL;
  src[169] = 0LL;
  if ( a3 < 5 )
    goto LABEL_9;
  v3 = (unsigned __int8 *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                            0LL,
                            4LL,
                            a2,
                            a3,
                            &off_2DFF690);
  if ( !v4 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_2DFF6A8);
  if ( v4 == 1 )
    core::panicking::panic_bounds_check(1LL, 1LL, &off_2DFF6C0);
  if ( v4 <= 2 )
    core::panicking::panic_bounds_check(2LL, 2LL, &off_2DFF6D8);
  if ( v4 == 3 )
    core::panicking::panic_bounds_check(3LL, 3LL, &off_2DFF6F0);
  if ( ((v5 = (*((unsigned __int16 *)v3 + 1) << 16) | *v3 | (v3[1] << 8), v5 <= 0x1E)
     && (v6 = 1358954500, _bittest(&v6, v5))
     || (v7 = _byteswap_ulong(v5), v7 <= 0x1E) && (v8 = 1358954500, _bittest(&v8, v7)))
    && (etherparse::lax_packet_headers::LaxPacketHeaders::from_ip(src), LODWORD(src[0]) != 6) )
  {
    memcpy(dest, src, 0x2548uLL);
  }
  else
  {
LABEL_9:
    *dest = 6;
  }
}