__int64 alacritty::renderer::Renderer::supports_robustness()
{
  _QWORD v1[5]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v2[3]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+48h] [rbp-20h]

  if ( (unsigned __int8)alacritty::renderer::GlExtensions::contains(aGlKhrRobustnes, 17LL) )
    alacritty::gl::storage::GetIntegerv();
  if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) > 2 )
  {
    v2[0] = &off_884130;
    v2[1] = 1LL;
    v2[2] = 8LL;
    v3 = 0LL;
    v1[0] = aAlacrittyRende_4;
    v1[1] = 19LL;
    v1[2] = aAlacrittyRende_4;
    v1[3] = 19LL;
    v1[4] = log::__private_api::loc(&off_884158);
    log::__private_api::log(v2, 3LL, v1);
  }
  return 0LL;
}