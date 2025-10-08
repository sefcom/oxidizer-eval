__int64 __fastcall sniffnet::gui::styles::types::color_remote::color_hash(__int64 a1, __int64 a2)
{
  _DWORD v3[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v3[0] = iced_core::color::Color::into_rgba8();
  core::hash::Hasher::write_length_prefix(a2);
  return <rustc_hash::FxHasher as core::hash::Hasher>::write(a2, v3, 4LL);
}