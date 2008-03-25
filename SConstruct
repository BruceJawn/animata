################################################################################
# animata top level scons script

ANIMATA_MAJOR_VERSION = '0'
ANIMATA_MINOR_VERSION = '003'
ANIMATA_VERSION = ANIMATA_MAJOR_VERSION + '.' + ANIMATA_MINOR_VERSION

DEBUG = 1
PROFILE = 0
# FIXME: set static linking automatically # if making a macos disk image
STATIC = 0

env = Environment()

platform = env['PLATFORM']

BuildDir('build', 'src', duplicate = 0)

SConscript('build/SConscript',
	exports = ['env', 'platform', 'ANIMATA_VERSION',
		'ANIMATA_MAJOR_VERSION', 'ANIMATA_MINOR_VERSION', 'DEBUG',
		'PROFILE', 'STATIC'])


# packaging / installing
# FIXME: make app and dmg only if required
'''
if platform == 'darwin':
	from scripts.macos.osxbundle import *
	TOOL_BUNDLE(env)
	env.Replace(FRAMEWORKS = Split('AGL OpenGL Carbon ApplicationServices'))
	env.Alias('app', env.MakeBundle('Animata.app',
		'build/animata',
		'key',
		'data/macos/animata.plist',
		typecode = 'APPL',
		icon_file = 'data/macos/animata.icns'))

	env['BUILDERS']['DiskImage'] = Builder(action = BuildDmg)
	# FIXME: remove .svn folders from examples 
	DMGFILES = [Dir('Animata.app'), Dir('examples')]
	env.Alias('dmg', env.DiskImage('Animata-' + ANIMATA_VERSION + '.dmg',
		DMGFILES))
'''
