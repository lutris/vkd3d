static const DWORD ps_stencil_export_load_code_dxbc[] =
{
    0x43425844, 0xdd1e98d4, 0x53c81701, 0x576f6b2e, 0x040b18bb, 0x00000001, 0x0000014c, 0x00000003,
    0x0000002c, 0x00000060, 0x00000094, 0x4e475349, 0x0000002c, 0x00000001, 0x00000008, 0x00000020,
    0x00000000, 0x00000001, 0x00000003, 0x00000000, 0x0000030f, 0x505f5653, 0x7469736f, 0x006e6f69,
    0x4e47534f, 0x0000002c, 0x00000001, 0x00000008, 0x00000020, 0x00000000, 0x00000000, 0x00000001,
    0x00000000, 0x0000000f, 0x545f5653, 0x45475241, 0xabab0054, 0x58454853, 0x000000b0, 0x00000050,
    0x0000002c, 0x0100086a, 0x04001858, 0x00107000, 0x00000000, 0x00004444, 0x04002064, 0x00101032,
    0x00000000, 0x00000001, 0x03000065, 0x001020f2, 0x00000000, 0x02000068, 0x00000001, 0x0500001c,
    0x00100032, 0x00000000, 0x00101046, 0x00000000, 0x08000036, 0x001000c2, 0x00000000, 0x00004002,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x8900002d, 0x800000c2, 0x00111103, 0x00100012,
    0x00000000, 0x00100e46, 0x00000000, 0x00107e16, 0x00000000, 0x05000036, 0x001020f2, 0x00000000,
    0x00100006, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE ps_stencil_export_load_dxbc = { ps_stencil_export_load_code_dxbc, sizeof(ps_stencil_export_load_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
