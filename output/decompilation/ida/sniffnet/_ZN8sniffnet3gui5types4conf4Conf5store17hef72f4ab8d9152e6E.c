__int64 __fastcall sniffnet::gui::types::conf::Conf::store(__int64 a1)
{
  _QWORD v2[2]; // [rsp+0h] [rbp-88h] BYREF
  int v3; // [rsp+10h] [rbp-78h]
  _BYTE v4[112]; // [rsp+18h] [rbp-70h] BYREF

  confy::store(v4);
  v2[0] = aSrcGuiTypesCon;
  v2[1] = 21LL;
  v3 = 66;
  return ((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD *))<core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err)(
           a1,
           v4,
           v2);
}