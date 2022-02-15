cmake_minimum_required ( ВЕРСИЯ 2.8) # Проверка версии CMake.

set ( PROJECT_NAME Test) # Создаем обычную локальную переменную с именем проекта
проект ( ${PROJECT_NAME} ) # Название проекта

set (vector vector) # Переменная с именем приложения
set (vectorlib vectorlib) # Переменная с именем библиотеки

set (CMAKE_CONFIGURATION_TYPES "Debug;Release"  CACHE STRING "Configs"  FORCE ) # Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраняется в специальном файле доступным из всех файлов,
if ( NOT CMAKE_BUILD_TYPE) # проверка наличия у компилятора вариантов сборки
  set (CMAKE_BUILD_TYPE Release) # Если нет установить Release
конец ()

# include_directories(${CMAKE_CURRENT_SOURCE_DIR}/vectorlib) #Добавляем директорию "${CMAKE_CURRENT_SOURCE_DIR}/vectorlib" в дополняемые каталоги включаемых файлов
# ${CMAKE_CURRENT_SOURCE_DIR} - стандартная переменная с адресом рабочей директории

# add_subdirectory(vector) #Добавляем директорию с под-CMakeList-ом, и выполняет под-CMakeList
# add_subdirectory(векторная библиотека)

# file(GLOB hdrs "*.h*") #Добавляем в переменную hdrs все файлы с расширением .h
# file(GLOB srcs "*.cpp") #Добавляем в переменную srcs все файлы с расширением .cpp

# include_directories(lib1)
# add_executable(${PROJECT_NAME} ${srcs} ${hdrs}) #Создаем проект с именем из устанавливаем ${PROJECT_NAME}, в него добавляются файлы из ${srcs} и ${hdrs}


 # Собираем проект в поддиректории lib1
# target_link_libraries(${PROJECT_NAME} ${MyLib1}) #Подключаем к проекту с именем ${PROJECT_NAME} подключаем с именем ${MyLib1}