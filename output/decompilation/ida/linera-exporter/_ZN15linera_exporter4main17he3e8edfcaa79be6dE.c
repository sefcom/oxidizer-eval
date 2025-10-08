__int64 linera_exporter::main()
{
  __int64 v0; // rbx
  _BYTE v2[208]; // [rsp+8h] [rbp-D0h] BYREF

  linera_base::tracing::init(aLineraExporter_0, 15LL);
  clap_builder::derive::Parser::parse(v2);
  v0 = linera_exporter::ExporterOptions::run(v2);
  core::ptr::drop_in_place<linera_exporter::ExporterOptions>(v2);
  return v0;
}